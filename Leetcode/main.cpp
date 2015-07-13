#include <iostream>
#include "solution.h"
using namespace std;

int main()
{
    ListNode* head = new ListNode(1);
    ListNode* p1 = new ListNode(0);
    ListNode* p2 = new ListNode(1);
    ListNode* p3 = new ListNode(3);
    ListNode* p4 = new ListNode(1);
    head->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = NULL;

    Solution s = Solution();
    cout<<s.strStr("CDABABFG", "ABABFG")<<endl;
    return 0;
}
