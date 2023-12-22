class Solution {
public:
      int maxScore(string s) {
        int n = s.size();
        int maxScore = 0;
        int zerosLeft = 0;
        int onesRight = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                onesRight++;
            }
        }

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '0') {
                zerosLeft++;
            } else {
                onesRight--;
            }

            maxScore = max(maxScore, zerosLeft + onesRight);
        }

        return maxScore;
    }
};
