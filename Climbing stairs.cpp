class Solution {
public:
    int climbStairs(int n) {
        long long int p1 = 1;
        long long int p2 = 1;
        for(int i = 0; i < n; i++){
            long long int tmp = p1;
            p1 = p1 + p2;
            p2 = tmp;

        }
        return p2;
    }
};
