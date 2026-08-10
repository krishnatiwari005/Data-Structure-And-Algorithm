class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i += 2) {
            s[i] = char((s[i - 1] - '0') + s[i]);
        }
        return s;
    }
};