#include "solution.h"

vector<TreeNode*> Solution::generateTrees(int n)
{
    return helper(1, n);
}

vector<TreeNode*> Solution::helper(int start, int end)
{
    if(start > end)
    {
        vector<TreeNode*> v;
        return v;
    }
    vector<TreeNode* > result;
    for(int i = start; i <= end; i++)
    {
        vector<TreeNode *> left, right;
        left = helper(start, i-1);
        right = helper(i+1, end);
        for (int m = 0; m < left.size(); m++)
            for(int n = 0; n < right.size(); n++)
            {
                 TreeNode* root = new TreeNode(i);
                 root->left = left[m];
                 root->right = right[n];
                 result.push_back(root);
            }
    }
    return result;
}
