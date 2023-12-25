#include <string>
#include <vector>

class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (s[0] == '0') {
            return 0;
        }

        // dp[i] represents the number of ways to decode the substring s[0...i]
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = (s[0] != '0') ? 1 : 0;

        // Build the dp array
        for (int i = 2; i <= n; ++i) {
            int oneDigit = stoi(s.substr(i - 1, 1));
            int twoDigits = stoi(s.substr(i - 2, 2));

            // Check if the current digit is not '0'
            if (oneDigit != 0) {
                dp[i] += dp[i - 1];
            }

            // Check if the last two digits form a valid mapping (between 10 and 26)
            if (twoDigits >= 10 && twoDigits <= 26) {
                dp[i] += dp[i - 2];
            }
        }

        return dp[n];
    }
};
