Problem_link:https://leetcode.com/problems/valid-palindrome/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    bool isPalindrome(string s) {
       int n = size(s);
        if(n == 1) return true;
        string str = "";
        for(int i=0; i<n; i++) if(isalnum(s[i])) str +=s[i];
        transform(str.begin(), str.end(), str.begin(), ::toupper);

        int i=0,j=size(str)-1;

        while(i<j) {
            if(str[i] != str[j]) return false;
            i++,j--;
        }
        return true;
    }
};
