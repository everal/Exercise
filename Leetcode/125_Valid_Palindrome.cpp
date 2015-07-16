#include "solution.h"

bool Solution::isPalindrome_125(string s) {
    if(s == "")
        return true;
    int i = 0;
    int j = s.size() - 1;
    while(i < j)
    {
        while(!isalpha(s[i]) && !isdigit(s[i]) && (i < j)) i++;
        while(!isalpha(s[j]) && !isdigit(s[j]) && (i < j)) j--;
        if(tolower(s[i]) != tolower(s[j]))
            return false;
        i++;
        j--;
    }
    return true;
}
