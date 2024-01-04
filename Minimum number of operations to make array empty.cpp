class Solution {
public:
    int minOperations(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int num: nums){
           mp[num]++;
       }

       int ans=0;
       for(auto &it : mp){
           if(it.second == 1 )
           return -1;
           ans+= it.second/3;
           if(it.second % 3)
           ans++;
       }
       return ans;
    }
};
