
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k)
    {
        int maximum = *max_element(nums.begin(), nums.end());

        unordered_map<int, int> mp;
        long j = 0, n = nums.size(), complement = 0;

        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
            while (mp[maximum] >= k)
                mp[nums[j++]]--;

            complement += (i - j + 1);
        }

        return ((long)n * (n + 1)) / 2 - complement;
    }
};
