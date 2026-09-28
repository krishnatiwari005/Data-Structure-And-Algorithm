class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int left = 0;
        int right = 0;
        for (auto ch : s) {
            if (ch == '(') {
                left++;
            } else if (ch == ')') {
                right++;
            }
            ans = max(ans, abs(left - right));
        }
        return ans;
    }
};