#ifndef SOLUTION_H_INCLUDED
#define SOLUTION_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <map>

using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    string addBinary(string a, string b);
    bool isIsomorphic(string s, string t);
    bool isPalindrome_203(ListNode* head);
    int strStr(string haystack, string needle);
    bool isPalindrome_125(string s);
    string convert(string s, int numRows);
};
#endif // SOLUTION_H_INCLUDED

