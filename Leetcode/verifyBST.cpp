#include "solution.h"

bool Solution::verifyBST(int squence[], int length)
{
    if(squence == NULL || length == 0)
        return false;
    int root = squence[length - 1];
    int i = 0;
    while(i < length - 1 && squence[i] < root)
        i++;
    int j = i;
    while(j < length - 1 && squence[j] > root)
        j++;
    if(squence[j] < root)
        return false;
    if(i > 0)
        bool left = verifyBST(squence, i);
    if(i < length - 1)
        bool right = verifyBST(squence + i, length - i - 1);
    return left&&right;
}
