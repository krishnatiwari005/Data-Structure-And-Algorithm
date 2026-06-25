class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if (n % 2 == 1) {
            ans.push_back(0);
        }
        for (int i = 1; ans.size() < n; i++) {
            ans.push_back(i);
            ans.push_back(-i);
        }
        return ans;
    }
};