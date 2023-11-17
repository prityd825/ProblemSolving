Problem_link: https://leetcode.com/problems/find-unique-binary-string/description/?envType=daily-question&envId=2023-11-16
class Solution {

public:
    set<string>s ;
    string ans="";

    void dfs(string str, int n){
          if(str.size()==n){
              if(s.find(str)== s.end() && ans == ""){
                  ans = str;
              }
              return;
          }

        dfs(str+'0',n);
        dfs(str+ '1',n);
        return;
    }
    string findDifferentBinaryString(vector<string>& nums) {
       for(auto e : nums){
           s.insert(e);
       }

       int n = nums[0].size();
       dfs("",n);
       return ans;

    }
};
