#include <string>
#include <algorithm>

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        // Case 1: Start with '0'
        int operationsWithStartZero = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != (i % 2 == 0 ? '0' : '1')) {
                operationsWithStartZero++;
            }
        }

        // Case 2: Start with '1'
        int operationsWithStartOne = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != (i % 2 == 0 ? '1' : '0')) {
                operationsWithStartOne++;
            }
        }

        // Return the minimum of the two cases
        return min(operationsWithStartZero, operationsWithStartOne);
    }
};
