Problem_link: https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
       int n = s.length();
    string reversedStr;
    string word;

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            word = s[i] + word;
        } else {
            if (!word.empty()) {
                if (!reversedStr.empty()) {
                    reversedStr += ' ';
                }
                reversedStr += word;
                word = "";
            }
        }
    }

    if (!word.empty()) {
        if (!reversedStr.empty()) {
            reversedStr += ' ';
        }
        reversedStr += word;
    }

    return reversedStr;
    }
};
