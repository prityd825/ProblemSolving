Problem_link: https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/?envType=daily-question&envId=2023-12-13
class Solution {
public:
    int numSpecial(std::vector<std::vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1) {
                    bool isRowSpecial = true;
                    for (int col = 0; col < n; ++col) {
                        if (col != j && mat[i][col] == 1) {
                            isRowSpecial = false;
                            break;
                        }
                    }

                    bool isColSpecial = true;
                    for (int row = 0; row < m; ++row) {
                        if (row != i && mat[row][j] == 1) {
                            isColSpecial = false;
                            break;
                        }
                    }

                    if (isRowSpecial && isColSpecial) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
