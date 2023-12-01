Problem_link: https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/
class Solution {
public:
    int minimumOneBitOperations(int n) {
        unordered_map<int, int> dp = {{0, 0}, {1, 1}};
        return helper(n, dp);
    }
private:
    int helper(int n, unordered_map<int, int>& dp) {
        if (dp.count(n) != 0) return dp[n];
        int bit = getLeftmostBit(n);
        int k = bit - 1;
        int magic110__0 = (1 << bit) | (1 << k);
        int step1 = helper(n ^ magic110__0, dp);
        int step2 = 1;
        int step3 = (1 << (k + 1)) - 1;
        return dp[n] = (step1 + step2 + step3);
    }
    int getLeftmostBit(int n) {
        int bit = 0;
        while (n > 1) { n >>= 1, bit++; }
        return bit;
    }
};
