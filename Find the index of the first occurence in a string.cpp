Problem_link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int n = haystack.size();
        int k = needle.size();

        for (int i = 0; i <= n - k; i++) {
            int j;
            for (j = 0; j < k; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == k) {
                return i;
            }
        }

        return -1;
    }
};
