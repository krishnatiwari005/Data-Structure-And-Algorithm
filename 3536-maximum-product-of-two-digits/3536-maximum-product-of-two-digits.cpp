class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        int m = (s[s.size() - 1] - '0') * (s[s.size() - 2] - '0');
        return m;
    }
};