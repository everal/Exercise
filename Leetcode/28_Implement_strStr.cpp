#include "solution.h"

int Solution::strStr(string haystack, string needle)
{
    if(needle == "")
        return 0;
    vector<int> next;
    int k = -1;
    next.push_back(-1);
    for(int i = 0; i < needle.size(); )
    {
        if(k == -1 || needle[k] == needle[i])
        {
            ++i;
            ++k;
            next.push_back(k);
        }
        else
            k = next[k];
    }

    int j = 0;
    for(int i = 0; i< haystack.size(); i++)
    {
        while(j > 0 && needle[j] != haystack[i])
        {
            j = next[j];
        }
        if(needle[j] == haystack[i])
            j = j + 1;
        if(j == needle.size())
        {
            return i - j + 1;
        }
    }
    return -1;
}


