Problem_link:https://leetcode.com/problems/restore-the-array-from-adjacent-pairs/
class Solution {
public:
 void dfs(map<int, vector<int>>& m, set<int>& v, int a, vector<int>& ans) {
        if (v.find(a) != v.end())
            return;
        ans.push_back(a);
        v.insert(a);
        for (auto x : m[a])
            dfs(m, v, x, ans);
    }

    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int, vector<int>> m;
        for (auto a : adjacentPairs) {
            m[a[0]].push_back(a[1]);
            m[a[1]].push_back(a[0]);
        }
        int head;
        for (auto a : m) {
            if (a.second.size() == 1) {
                head = a.first;
                break;
            }
        }
        set<int> v;
        vector<int> ans;
        dfs(m, v, head, ans);
        return ans;
    }
};
