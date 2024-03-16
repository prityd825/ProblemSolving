class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> m;
        m[0] = -1;
        int maxLen = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i] == 1 ? 1 : -1;
            if (m.count(sum)) {
                maxLen = max(maxLen, i - m[sum]);
            } else {
                m[sum] = i;
            }
        }

        return maxLen;

    }
};
