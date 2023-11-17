Problem_link:https://leetcode.com/problems/length-of-last-word/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;


        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }


        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
