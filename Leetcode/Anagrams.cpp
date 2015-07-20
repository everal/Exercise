#include "solution.h"

vector<string> Solution::anagrams(vector<string>& strs) {
    vector<string> result;
    map<string, int> m;
    for(int i = 0; i < strs.size(); i++)
    {
        string tmp = strs[i];
        sort(tmp.begin(), tmp.end());
        if(m.find(tmp) != m.end())
        {
            if(m[tmp] != -1)
            {
                result.push_back(strs[m[tmp]]);
                m[tmp] = -1;
            }
            result.push_back(strs[i]);
        }
        else
            m[tmp] = i;
    }
    return result;
}
