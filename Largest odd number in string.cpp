Problem_link: https://leetcode.com/problems/largest-odd-number-in-string/description/
class Solution {
public:
    std::string largestOddNumber(std::string num) {
        if (isOdd(num.back() - '0')) {
            return num;
        }

        for (int i = num.length() - 1; i >= 0; --i) {
            if (isOdd(num[i] - '0')) {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }

private:
    bool isOdd(int n) {
        return n % 2 == 1;
    }
};
