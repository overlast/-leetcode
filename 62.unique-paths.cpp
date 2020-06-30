/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> matrix(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((i == 0) || (j == 0)) {
                    matrix[i][j] = 1;
                }
                else if (j == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((i != 0) && (j != 0)) {
                    int temp = matrix[i][j - 1] + matrix[i - 1][j];
                    matrix[i][j] = temp;
                }
            }
        }
        return matrix[m - 1][n - 1];
    }
};
// @lc code=end
