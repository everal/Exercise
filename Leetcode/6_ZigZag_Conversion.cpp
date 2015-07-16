#include "solution.h"

string Solution::convert(string s, int numRows)
{
    if(s.size() < numRows || numRows == 1)
        return s;
    vector<vector<char> > result;
    vector<char> tmp;
    for(int i = 0; i < numRows; i++)
    {
        tmp.push_back(s[i]);
        result.push_back(tmp);
        tmp.clear();
    }

    int n = numRows - 1;
    int i = numRows;
    bool flag = false;
    while(i < s.size())
    {
        if(flag == false && n > 0)
        {
            n--;
            result[n].push_back(s[i]);
            i++;
            if(n == 0)
            {
                flag = true;
            }
        }
        if(flag == true && n < numRows - 1)
        {
            n++;
            result[n].push_back(s[i]);
            i++;
            if(n == numRows - 1)
                flag = false;
        }
    }
    string str = "";
    for(i = 0; i < result.size(); i++)
        for(int j = 0; j < result[i].size(); j++)
            str += result[i][j];
    cout<<str.size()<<endl;
    return str;
}
