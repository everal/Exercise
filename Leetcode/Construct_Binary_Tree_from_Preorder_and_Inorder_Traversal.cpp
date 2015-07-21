#include "solution.h"



TreeNode* buildTree_helper(vector<int>& preorder, vector<int>::iterator ps, vector<int>::iterator pe, vector<int>& inorder, vector<int>::iterator is, vector<int>::iterator ie)
{
    if(ps > pe)
        return NULL;
    vector<int>::iterator k = find(inorder.begin(), inorder.end(), *ps);
    TreeNode* root = new TreeNode(*k);
    root->left = buildTree_helper(preorder, ps+1, ps+(k-is), inorder, is, k-1);
    root->right = buildTree_helper(preorder, ps+(k-is)+1, pe, inorder, k+1, ie);
    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if(preorder.empty() || inorder.empty())
        return NULL;
    return buildTree_helper(preorder, preorder.begin(), preorder.end() - 1, inorder, inorder.begin(), inorder.end() - 1);
}
