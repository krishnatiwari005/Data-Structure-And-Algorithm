class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int one = 0, zero = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                if (i > 0 && s[i - 1] == '1') {
                    zero = 0;
                    one = 0;
                }
                zero++;
            } else {
                one++;
                ans = max(ans, 2 * min(one, zero));
            }
        }
        return ans;
    }
};