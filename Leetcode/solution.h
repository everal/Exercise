#ifndef SOLUTION_H_INCLUDED
#define SOLUTION_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
#include <algorithm>
#include <stack>

using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
TreeNode* buildTree_helper(vector<int>& preorder, vector<int>::iterator ps, vector<int>::iterator pe, vector<int>& inorder, vector<int>::iterator is, vector<int>::iterator ie);

class Solution
{
public:
    string addBinary(string a, string b);
    bool isIsomorphic(string s, string t);
    bool isPalindrome_203(ListNode* head);
    int strStr(string haystack, string needle);
    bool isPalindrome_125(string s);
    string convert(string s, int numRows);
    void deleteNode(ListNode* node);
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
    vector<TreeNode*> generateTrees(int n) ;
    vector<TreeNode*> helper(int start, int end);
    ListNode* deleteDuplicates(ListNode* head);
    vector<string> anagrams(vector<string>& strs);
    vector<int> maxSlidingWindow(vector<int>& nums, int k);
    bool isPopOrder(vector<int> pPush, vector<int> pPop);
    bool verifyBST(int squence[], int length);
};
#endif // SOLUTION_H_INCLUDED

