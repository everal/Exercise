#include <iostream>
#include "solution.h"
using namespace std;

int main()
{
    ListNode* head = new ListNode(1);
    ListNode* p1 = new ListNode(2);
    ListNode* p2 = new ListNode(3);
    ListNode* p3 = new ListNode(3);
    ListNode* p4 = new ListNode(3);
    head->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = NULL;

    vector<string> str;
    str.push_back("abcdef");
    str.push_back("acdefb");
    str.push_back("adecfb");
    str.push_back("asd");
    str.push_back("sda");
    str.push_back("a");


    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    //v1.push_back(3);
    //v1.push_back(6);
    //v1.push_back(7);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    //v2.push_back(3);

    Solution s = Solution();
    int squence[7] = {5,7,6,9,11,10, 8};
    cout<<s.verifyBST(squence, 7)<<endl;
    //cout<<s.isPopOrder(v1, v2)<<endl;
    //v2 = s.maxSlidingWindow(v1, 8);
    //for(int i = 0; i < v2.size(); i++)
    //    cout<<v2[i]<<endl;
    //TreeNode* node = buildTree(v1, v2);
    //cout<<node->val<<" ";
    //cout<<node->left->val<<" ";
    //cout<<node->right->val<<" ";
    return 0;
}
