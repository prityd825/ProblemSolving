class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> frequency;
        for(int num: nums){
            frequency[num]++;
        }
        int maxFreq = 0;
        for (const auto& pair : frequency) {
            maxFreq = max(maxFreq, pair.second);
        }
        int count = 0;
        for (const auto& pair : frequency) {
            if (pair.second == maxFreq) {
                count += pair.second;
            }
        }
        return count;
    }
};
