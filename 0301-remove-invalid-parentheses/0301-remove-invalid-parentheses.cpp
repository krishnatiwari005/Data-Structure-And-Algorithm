class Solution {
public:
    int count = 0;
    int n;
    unordered_set<string> st;
    int maxlength;
    void solve(string& s, int i, string& curr, int count) {
        if (count < 0)
            return;
        if (i == n) {
            if (count == 0) {
                if (curr.length() > maxlength) {
                    maxlength = curr.length();
                    st.clear();
                }
                if (curr.length() == maxlength) {
                    st.insert(curr);
                }
            }
            return;
        }
        if (s[i] != '(' && s[i] != ')') {
            curr.push_back(s[i]);
            solve(s, i + 1, curr, count);
            curr.pop_back();
            return;
        }
        curr.push_back(s[i]);
        solve(s, i + 1, curr, count + (s[i] == '(' ? 1 : -1));
        curr.pop_back();
        solve(s, i + 1, curr, count);
    }
    vector<string> removeInvalidParentheses(string s) {
        n = s.size();
        string curr = "";
        maxlength = 0;
        st.clear();
        solve(s, 0, curr, count);
        return vector<string>(st.begin(), st.end());
    }
};