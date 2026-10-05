class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> st;
        if (s.size() > t.size()) {
            return false;
        }
        for (char a : s) {
            st.push(a);
        }
        for (int i = t.size() - 1; i >= 0 && !st.empty(); i--) {
            if (t[i] == st.top()) {
                st.pop();
            }
        }
        return st.empty();
    }
};