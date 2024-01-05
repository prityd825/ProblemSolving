class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n = nums.size();
       vector<int> k(n, 1);

        for(int i =0;i<n; i++)
           for(int j =0;j<i;j++){
               if(nums[i]>nums[j]){
                   if(k[j]+1>k[i]){
                       k[i] = k[j]+1;
                   }
               }
           }

        int maxIndex = 0;
        for(int i=0;i<n;i++){
            if(k[i]>k[maxIndex]){
                maxIndex= i ;
            }
        }
        return k[maxIndex];

    }
};
