Probelm_link: https://leetcode.com/problems/maximum-number-of-coins-you-can-get/
class Solution {
public:
    int maxCoins(vector<int>& piles) {
      sort(piles.begin(), piles.end());
      int ans = 0, n = piles.size();
      for (int i = n / 3; i < n; i += 2)
          ans += piles[i];
       return ans;
    }
};
