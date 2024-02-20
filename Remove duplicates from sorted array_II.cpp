Problem_link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2){
            return n;
        }

        int k = 2;
        for(int i=2;i<n;i++){
            if(nums[i]!= nums[k-2]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
