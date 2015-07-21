#include "solution.h"

bool Solution::isPopOrder(vector<int> pPush, vector<int> pPop)
{
    if(pPush.size() == 0 && pPop.size() == 0)
        return false;
    bool flag = false;
    stack<int> sData;
    int i,j = 0;
    for(i = 0; i < pPop.size(); i++)
    {
        while(sData.empty() || sData.top() != pPop[i])
        {
            if(j < pPush.size())
            {
                sData.push(pPush[j]);
                j++;
            }
            else
                break;
        }
        if(sData.top() != pPop[i])
            break;
        sData.pop();
    }
    if(sData.empty() && i == pPop.size())
        flag = true;
    return flag;
}
