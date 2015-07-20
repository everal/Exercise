#include "solution.h"

vector<int> Solution::maxSlidingWindow(vector<int>& nums, int k) {

    vector<int> result;
    int max;
    if(nums.size() == 0)
        return result;
    if(nums.size() < k)
        k = nums.size();
    for(int i = 0; i <= nums.size() - k; i++)
    {
        max = nums[i];
        for(int j = i; j - i < k && j < nums.size(); j++)
        {
            if(max < nums[j])
                max = nums[j];
        }
        result.push_back(max);
    }
    return result;
}
