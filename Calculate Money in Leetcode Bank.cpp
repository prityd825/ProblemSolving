Problem_link: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int week = 0;
        int day = 1;

        for (int i=1;i<=n;i++){
            total = total + day;
            day++;

            if(i%7==0){
                week++;
                day = week + 1;
            }
        }

        return total;


    }
};
