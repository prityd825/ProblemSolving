class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> sumCount;
        int count = 0;
        int sum = 0;

        for(int num: nums)
        {
            sum = sum + num;
            if(sum == goal)
               count++;
            if(sumCount.find(sum-goal) != sumCount.end())
               count += sumCount[sum - goal];
            sumCount[sum]++;
        }

        return count;
    }
};
