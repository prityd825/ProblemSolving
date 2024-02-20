Problem_Link: https://leetcode.com/problems/missing-number/?envType=daily-question&envId=2024-02-20
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = n*(n+1)/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
        }
        return expected_sum - sum;

    }
};
