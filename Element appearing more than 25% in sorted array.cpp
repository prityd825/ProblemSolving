Problem_link: https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/
class Solution {
public:
    int findSpecialInteger(std::vector<int>& arr) {
        int n = arr.size();
        int count = 1;

        for (int i = 1; i < n; ++i) {
            if (arr[i] == arr[i - 1]) {
                count++;
                if (count > n / 4) {
                    return arr[i];
                }
            } else {
                count = 1;
            }
        }

        // If the loop finishes, the last element is the answer
        return arr[n - 1];
    }
};
