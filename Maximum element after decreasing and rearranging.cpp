Problem_link:https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/description/?envType=daily-question&envId=2023-11-15
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        if(arr[0]!=1){
            arr[0]=1;
        }
        int n = arr.size(), ans = 1;
        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i - 1] > 1)
                arr[i] = arr[i - 1] + 1;
            ans = max(ans, arr[i]);
        }

        return ans;
    }
};
