class Solution {
public:
    int firstUniqChar(string s) {
    /*
    unordered_map<char, int> frequency;
    for (char ch : s) {
        frequency[ch]++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (frequency[s[i]] == 1) {
            return i;
        }
    }
    return -1;
    */
   int n = s.size();
        for (int i = 0; i < n; i++) {
            bool isUnique = true;
            for (int j = 0; j < n; j++) {
                if (i != j && s[i] == s[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                return i;
            }
        }

        return -1;
    }
};
