class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int i = 0;
        int j = 0;
        vector<vector<bool>> check(m, vector<bool>(n, false));
        check[0][0] = true;
        int lasti = 0;
        int lastj = 0;
        while (true) {
            char dir = grid[i][j];
            if (dir == 'R') {
                j++;
            } else if (dir == 'D') {
                i++;
            } else if (dir == 'L') {
                j--;
            } else if (dir == 'U') {
                i--;
            }
            if (i < 0 || i >= m || j < 0 || j >= n) {
                return {lasti, lastj};
            }
            if (check[i][j]) {
                return {lasti, lastj};
            }
            lasti = i;
            lastj = j;
            check[lasti][lastj] = true;
        }
    }
};