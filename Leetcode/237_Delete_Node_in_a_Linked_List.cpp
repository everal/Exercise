#include "solution.h"

void Solution::deleteNode(ListNode* node)
{

    /*
    //memory leak
    node->val = node->next->val;
    node->next = node->next->next;
    */
    ListNode* tmp = node->next;
    node->val = tmp->val;
    node->next = tmp->next;
    delete tmp;
}
