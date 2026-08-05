class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int s = 0;
        int ans = INT_MIN;
        for (int i = 0; i < m; i++) {
            s = 0;
            for (int j = 0; j < n; j++) {
                s += accounts[i][j];
            }
            ans = max(ans, s);
        }
        return ans;
    }
};