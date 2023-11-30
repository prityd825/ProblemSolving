Code_link: https://leetcode.com/problems/number-of-1-bits/description/?envType=daily-question&envId=2023-11-29
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n > 0) {
            if (n & 1) {
                count++;
            }
            n >>= 1;
        }

        return count;
    }
};
