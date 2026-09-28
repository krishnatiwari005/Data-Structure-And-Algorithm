class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int ans = 0;
        for (auto ch : s) {
            if (ch == '(') {
                depth++;
                ans = max(ans, depth);
            } else if (ch == ')') {
                depth--;
            }
        }
        return ans;
    }
};