class Solution {
public:
    int rever(int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        long long count=0,mod=1e9+7;
        map<int,long long>M;
        for(auto c: nums){
            c-=rever(c);
            M[c]++;
        }
        for(auto c: M){
            if(c.second!=0) count+=(c.second*(c.second-1)/2)%mod;
        }
        return count%mod;
    }
};
