class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> pos(26, 0);
        for (int i = 0; i < s.size(); i++) {
            pos[s[i] - 'a'] = i;
        }
        int ans = 0;
        for (int i = 0; i < t.size(); i++) {
            ans += abs(pos[t[i] - 'a'] - i);
        }
        return ans;
    }
};