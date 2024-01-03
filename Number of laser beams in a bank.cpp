class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int p = 0;
        int ans = 0;

        for(string s : bank){
            int c = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '1') {
                    c++;
                }
            }
            if (c > 0) {
                ans += c * p;
                p = c;
            }
        }
        return ans;
    }
};
