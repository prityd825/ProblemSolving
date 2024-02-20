class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return {};
    sort(nums.begin(), nums.end());
    vector<int> dp(n, 1);
    vector<int> prev(n, -1);
    int max_len = 1, max_index = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            }
        }
        if (dp[i] > max_len) {
            max_len = dp[i];
            max_index = i;
        }
    }

    vector<int> result;
    while (max_index != -1) {
        result.push_back(nums[max_index]);
        max_index = prev[max_index];
    }
    return result;

    }
};
