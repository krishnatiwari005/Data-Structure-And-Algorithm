class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int m = INT_MIN;
        int l = s.size();
        for (int i = 0; i < l; i++) {
            for (int j = i + 1; j < l; j++) {
                m = max(m, (s[i] - '0') * (s[j] - '0'));
            }
        }
        return m;
    }
};