Problem_link: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
#include <unordered_map>
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> charCount;
        for (char c : chars) {
            charCount[c]++;
        }

        int result = 0;
        for (string word : words) {
            unordered_map<char, int> wordCount(charCount);

            bool isGood = true;
            for (char c : word) {
                if (wordCount[c] > 0) {
                    wordCount[c]--;
                } else {
                    isGood = false;
                    break;
                }
            }
            if (isGood) {
                result += word.length();
            }
        }

        return result;
    }
};
