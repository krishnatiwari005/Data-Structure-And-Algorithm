class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> lastenterchar;
        string result = "";
        for (auto ch : s) {
            if (ch == '(') {
                lastenterchar.push(result.size());
            } else if (ch == ')') {
                int l = lastenterchar.top();
                lastenterchar.pop();
                reverse(result.begin() + l, result.end());
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};