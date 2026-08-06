class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        vector<bool> ok(26, false);
        for (char ch : allowed) {
            ok[ch - 'a'] = true;
        }
        for (int i = 0; i < words.size(); i++) {
            bool x = true;
            for (char ch : words[i]) {
                if (ok[ch - 'a'] == false) {
                    x = false;
                }
            }
            if (x) {
                ans++;
            }
        }
        return ans;
    }
};