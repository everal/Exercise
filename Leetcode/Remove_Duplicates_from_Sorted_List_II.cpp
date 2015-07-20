#include "solution.h"

ListNode* Solution::deleteDuplicates(ListNode* head) {
    if(head ==NULL)
        return NULL;
    map<int, int> del;
    ListNode* p = head;
    while(p && p->next)
    {
        if(p->val == p->next->val)
        {
            p->next = p->next->next;
            del[p->val] = 1;
        }
        else
            p = p->next;
    }

    ListNode* pre = head;
    p = head->next;
    while(p)
    {
        if(del.find(p->val) != del.end())
        {
            pre->next = p->next;
            p = pre->next;
        }
        else
        {
            pre = p;
            p = p->next;
        }
    }
    while(head && del.find(head->val) != del.end())
        head = head->next;
    return head;
}
