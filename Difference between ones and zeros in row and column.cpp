class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Initialize vectors to store the counts of ones and zeros for rows and columns
        vector<int> onesRow(m, 0);
        vector<int> zerosRow(m, 0);
        vector<int> onesCol(n, 0);
        vector<int> zerosCol(n, 0);

        // Calculate the counts of ones and zeros for rows
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                onesRow[i] += grid[i][j];
                zerosRow[i] += 1 - grid[i][j];
            }
        }

        // Calculate the counts of ones and zeros for columns
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m; ++i) {
                onesCol[j] += grid[i][j];
                zerosCol[j] += 1 - grid[i][j];
            }
        }

        // Initialize the difference matrix
        vector<vector<int>> diff(m,vector<int>(n, 0));

        // Calculate the difference for each cell
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }

        return diff;
    }
};
