#include "solution.h"

int Solution::calculate(string s)
{
    if(s.size() == 0)
        return 0;
    int result = 0;
    stack<int> num;
    stack<char> op;
    int i = 0;
    while(i < s.size())
    {
        int val = 0;
        if(isdigit(s[i]))
        {
            while(isdigit(s[i]))
            {
                val = val * 10 + (s[i] - '0');
                i++;
            }
            num.push(val);
        }
        else
        {
            if(op.empty())
                op.push(s[i]);
            else
            {
                while((s[i] == '+') && (op.empty() != NULL))
                {
                    char oper = op.top();
                    op.pop();
                    int num1 = num.top();
                    num.pop();
                    int num2 = num.top();
                    num.pop();
                    if(oper == '+')
                        num1 = num1 + num2;
                    else
                        num1 = num1 - num2;
                    num.push(num1);
                }
                op.push(s[i]);
                while((s[i] == '-') && (op.empty() != NULL))
                {
                    char oper = op.top();
                    op.pop();
                    int num1 = num.top();
                    num.pop();
                    int num2 = num.top();
                    num.pop();
                    if(oper == '+')
                        num1 = num1 + num2;
                    else
                        num1 = num1 - num2;
                    num.push(num1);
                }
                op.push(s[i]);
                while((s[i] == '*') && (op.empty() != NULL) &&(op.top() == '*' || op.top() == '/'))
                {
                    char oper = op.top();
                    op.pop();
                    int num1 = num.top();
                    num.pop();
                    int num2 = num.top();
                    num.pop();
                    if(oper == '*')
                        num1 = num1 * num2;
                    else
                        num1 = num1 / num2;
                    num.push(num1);
                }
                op.push(s[i]);
                while((s[i] == '/') && (op.empty() != NULL) &&(op.top() == '*' || op.top() == '/'))
                {
                    char oper = op.top();
                    op.pop();
                    int num1 = num.top();
                    num.pop();
                    int num2 = num.top();
                    num.pop();
                    if(oper == '*')
                        num1 = num1 * num2;
                    else
                        num1 = num1 / num2;
                    num.push(num1);
                }
                op.push(s[i]);
            }
        }
        while(!op.empty())
        {
            int num1 = num.top();
            num.pop();
            int num2 = num.top();
            num.pop();
            char oper = op.top();
            op.pop();
            if(oper == '+')
                num1 = num1 + num2;
            else if(oper == '-')
                num1 = num1 - num2;
            else if(oper == '*')
                num1 = num1 * num2;
            else if(oper == '/')
                num1 = num1 / num2;
            num.push(num1);
        }
        return num.top();
    }
}
