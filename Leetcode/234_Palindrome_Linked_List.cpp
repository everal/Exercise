#include "solution.h"

bool Solution::isPalindrome(ListNode* head)
{
    if(head == NULL || head->next == NULL)
        return true;
    ListNode* p1 = head;
    ListNode* p2 = head;
    while(p2 != NULL && p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    ListNode* pre = p1;
    p1 = p1->next;
    ListNode* end;
    while(p1 != NULL)
    {
        end = p1->next;
        p1->next = pre;
        pre = p1;
        p1 = end;
    }
    while(head != pre && head->next != pre)
    {
        if(head->val != pre->val)
            return false;
        head = head->next;
        pre = pre->next;
    }
    if(head->val == pre->val)
        return true;
    else
        return false;
}
