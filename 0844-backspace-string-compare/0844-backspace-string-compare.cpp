class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "";
        for (auto ch : s) {
            if (!s1.empty() && ch == '#') {
                s1.pop_back();
            } else if (ch != '#') {
                s1.push_back(ch);
            }
        }
        string t1 = "";
        for (auto ch : t) {
            if (!t1.empty() && ch == '#') {
                t1.pop_back();
            } else if (ch != '#') {
                t1.push_back(ch);
            }
        }
        return t1 == s1;
    }
};