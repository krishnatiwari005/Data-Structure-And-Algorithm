class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < m; j++) {
                int prev = grid[j][i];
                grid[j][i] = max(grid[j - 1][i] + 1, grid[j][i]);
                count += abs(prev - grid[j][i]);
            }
        }
        return count;
    }
};