Problem_link : https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/?envType=daily-question&envId=2023-11-08

class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(fx == sx and fy == sy and t==1)
           return false;
        bool f = t >= max(abs(fx-sx), abs(fy-sy));
           return f;
    }
};
