#include "solution.h"

bool Solution::isIsomorphic(string s, string t)
{
    map<char, char> ms;
    map<char, char> mt;
    string s1;
    string t1;
    for(int i = 0; i < s.size(); i++)
    {
        if(ms.find(s[i]) == ms.end())
            ms[s[i]] = t[i];
        if(ms[s[i]] != t[i])
            return false;
        if(mt.find(t[i]) == mt.end())
            mt[t[i]] = s[i];
        if(mt[t[i]] != s[i])
            return false;
    }
    return true;

}
