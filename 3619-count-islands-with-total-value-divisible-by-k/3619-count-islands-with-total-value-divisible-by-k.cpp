class Solution {
public:
    int m, n;
    vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    long long dfs(vector<vector<int>>& grid, int r, int c) {
        long long sum = grid[r][c];
        grid[r][c] = 0;
        for (vector<int>& dir : directions) {
            int i = r + dir[0];
            int j = c + dir[1];
            if (i >= 0 && i < m && j >= 0 && j < n && grid[i][j] > 0) {
                sum += dfs(grid, i, j);
            }
        }
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    long long sum = dfs(grid, i, j);
                    if (sum % k == 0) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};