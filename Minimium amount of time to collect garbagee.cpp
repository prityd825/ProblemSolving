Problem_link: https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/?envType=daily-question&envId=2023-11-20
class Solution {
public:
int travelDuration(int& truck, vector<int>& travel) {
        int sum = 0;
        for(int i=0; i<=truck; i++) {
            sum += travel[i];
        }
        return sum;
    }

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m=0, p=0, g=0;
        int res = 0;
        travel.insert(travel.begin(), 0);
        for(int i=0; i<garbage.size(); i++) {
            if(garbage[i].find('G') != string::npos)
                  g = i;
            if(garbage[i].find('P') != string::npos)
                  p = i;
            if(garbage[i].find('M') != string::npos)
                  m = i;
            res += garbage[i].size();
        }
        res += travelDuration(m, travel);
        res += travelDuration(g, travel);
        res += travelDuration(p, travel);
        return res;

    }
};
