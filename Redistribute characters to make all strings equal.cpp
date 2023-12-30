class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char, int> charCount;

        for (const string& word : words) {
            for (char c : word) {
                charCount[c]++;
            }
        }
        for (const auto& entry : charCount) {
            if (entry.second % n != 0) {
                return false;
            }
        }

        return true;
    }
};
