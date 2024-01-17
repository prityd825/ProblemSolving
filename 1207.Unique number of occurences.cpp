class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>count;
        for(int num:arr){
        count[num]++;
        }

        unordered_set<int>occurrence;
        for (auto& entry : count) {
            if (!occurrence.insert(entry.second).second) {
                // If the count is already in the set, return false
                return false;
            }
        }
        return true;

    }
};
