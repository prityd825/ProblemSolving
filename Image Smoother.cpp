class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n, 0));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int sum = 0;
                int count = 0;

                for (int x = max(0, i - 1); x <= min(m - 1, i + 1); ++x) {
                    for (int y = max(0, j - 1); y <= min(n - 1, j + 1); ++y) {
                        sum += img[x][y];
                        ++count;
                    }
                }

                result[i][j] = sum / count;
            }
        }

        return result;
    }
};
