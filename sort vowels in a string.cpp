problem_link:https://leetcode.com/problems/sort-vowels-in-a-string/?envType=daily-question&envId=2023-11-13

class Solution {
private:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

public:
    string sortVowels(string s) {
        string t = "";
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                temp += s[i];
            }
        }
        sort(temp.begin(), temp.end());

        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                t += temp[j];
                j++;
            } else {
                t += s[i];
            }
        }
        return t;
    }
};

