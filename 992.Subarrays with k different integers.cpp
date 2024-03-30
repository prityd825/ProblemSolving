class Solution {
public:
   int countSubarray(vector<int>& nums,int k)
   {
     unordered_map<int,int> mp;

        int i=0,j=0;
        int count=0;
        while(j<nums.size())
        {
            mp[nums[j]]++;
            while(mp.size()>k && i<=j)
            {
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);
                i++;
            }
            count+=j-i+1;
            j++;

        }
        return count;
   }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int count1=countSubarray(nums,k);
        int count2=countSubarray(nums,k-1);
        return count1-count2;
    }
};
