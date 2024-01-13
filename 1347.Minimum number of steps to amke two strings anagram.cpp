class Solution {
public:
    int minSteps(string s, string t) {
    if (s.length() != t.length()) {
        return -1;
    }
    vector<int> s_v(26, 0);
    vector<int> t_v(26, 0);
    for (char ch : s) {
        s_v[ch - 'a']++;
    }
    for (char ch : t) {
        t_v[ch - 'a']++;
    }
    int steps = 0;

    for (int i = 0; i < 26; ++i) {
        steps += abs(s_v[i] - t_v[i]);
    }
    return steps / 2;
    }
};
