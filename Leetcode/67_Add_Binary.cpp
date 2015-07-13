#include "solution.h"

string Solution::addBinary(string a, string b)
{
    string c = "";
    char tmp;
    char add = '0';
    int i, j;
    for(i = a.size()-1,  j = b.size()-1; i >= 0 && j>= 0; i--, j--)
    {
        if(a[i] == '1' && b[j] == '1')
        {
            if(add == '1')
            {
                tmp = '1';
                add = '1';
            }
            else
            {
                add = '1';
                tmp = '0';
            }
        }
        else if (a[i] == '0' && b[j] == '0')
        {
            if(add == '1')
            {
                tmp = '1';
                add = '0';
            }
            else
            {
                add = '0';
                tmp = '0';
            }
        }
        else
        {
            if(add == '1')
            {
                tmp = '0';
                add = '1';
            }
            else
            {
                add = '0';
                tmp = '1';
            }
        }
        c = tmp + c;
    }
    while(i >= 0)
    {
        if(a[i] == '1' && add == '1')
        {
            add = '1';
            c = '0' + c;
        }
        else if(a[i] == '0' && add == '0')
        {
            add = '0';
            c = '0' + c;
        }
        else
        {
            add = '0';
            c = '1' + c;
        }
        i--;
    }
    while(j >= 0)
    {
        if(b[j] == '1' && add == '1')
        {
            add = '1';
            c = '0' + c;
        }
        else if(b[j] == '0' && add == '0')
        {
            add = '0';
            c = '0' + c;
        }
        else
        {
            add = '0';
            c = '1' + c;
        }
        j--;
    }
    if(add == '1')
        c = add + c;
    return c;
}
