Problem_link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/?envType=daily-question&envId=2023-12-12
class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // The maximum value of the two largest elements
        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    }
};
