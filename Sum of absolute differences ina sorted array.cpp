Problem_link: https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = accumulate(nums.begin(), nums.end(), 0);
        vector<int> result(n);
        for (int i = 0; i < n; i++)
        {
            result[i] = (nums[i] * i - left) + (right - nums[i] * (n - i));
            left += nums[i];
            right -= nums[i];
        }
        return result;
    }

};
