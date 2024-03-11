using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        string result;
        for (char c : order) {
            if (freq.count(c)) {
                result += string(freq[c], c);
                freq.erase(c);
            }
        }
        for (auto& pair : freq) {
            result += string(pair.second, pair.first);
        }

        return result;
    }
};
