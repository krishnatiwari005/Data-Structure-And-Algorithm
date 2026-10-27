class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        for (int i = 0; i < m - 1; i++) {
            string t = "";
            t += ".";
            for (int j = 1; j < n; j++) {
                t += "#";
            }
            ans.push_back(t);
        }
        string t = "";
        for (int i = 0; i < n; i++) {
            t += ".";
        }
        ans.push_back(t);
        return ans;
    }
};