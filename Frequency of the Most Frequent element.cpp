class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans = 1 , i = 0;
        long sum = 0;
        sort(nums.begin(),nums.end());
        for(int j = 0 ; j < nums.size() ; j++)
        {
            int target = nums[j];
            sum += target;
            long cond = (long)( j - i + 1 ) * target  - sum;
            while(cond > k )
            {
                sum -= nums[i];
                i++;
                cond = (long)( j - i + 1 ) * target  - sum;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }

};
