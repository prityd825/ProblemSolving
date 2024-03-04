class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
         sort(tokens.begin(), tokens.end());

        int st = 0;
        int ed = tokens.size() - 1;
        int maxScore = 0;
        int score = 0;

        while (st <= ed) {
            if (power >= tokens[st]) {
                power -= tokens[st];
                st++;
                score += 1;
                maxScore = max(maxScore, score);
            } else if (score > 0) {
                power += tokens[ed];
                ed--;
                score -= 1;
            } else {
                break;
            }
        }

        return maxScore;
    }
};
