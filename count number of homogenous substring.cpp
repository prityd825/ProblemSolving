Problem_link: https://leetcode.com/problems/count-number-of-homogenous-substrings/?envType=daily-question&envId=2023-11-09
class Solution {
public:
    int countHomogenous(string s) {
        const int mod = 1000000007;
        int sum = s.size();
        int length =1;
        for(int i=1;i<s.size();i++){
            if(s[i]== s[i-1]){
                sum = (sum+length)%mod;
                length++;
            }
            else{
                length=1;
            }
        }
        return sum;

    }
};
