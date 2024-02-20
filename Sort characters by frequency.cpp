class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char, int> f;
    for (char c : s) {
        f[c]++;
    }

    vector<pair<char, int>> sorted_chars(f.begin(), f.end());
    sort(sorted_chars.begin(), sorted_chars.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });

    string sorted_string;
    for (auto& p : sorted_chars) {
        sorted_string += string(p.second, p.first);
    }

    return sorted_string;
    }
};


