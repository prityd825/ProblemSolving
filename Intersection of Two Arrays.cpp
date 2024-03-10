#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        vector<int> res;
        for (int num : nums1) {
            if (find(nums2.begin(), nums2.end(), num) != nums2.end() && s.find(num) == s.end()) {
                res.push_back(num);
                s.insert(num);
            }
        }

        return res;
    }
};
