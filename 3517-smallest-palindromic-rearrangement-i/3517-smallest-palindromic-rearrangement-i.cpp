class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if (s.size() < 2) {
            return s;
        }
        string ans = "";
        if (n % 2 == 0) {
            ans = s.substr(0, (n + 1) / 2);
            sort(ans.begin(), ans.end());
            string temp = ans;
            reverse(temp.begin(), temp.end());
            return ans + temp;
        } else {
            ans = s.substr(0, (n - 1) / 2);
            sort(ans.begin(), ans.end());
            string temp = ans;
            reverse(temp.begin(), temp.end());
            ans = ans + s[(n - 1) / 2];
            return ans + temp;
        }
        return ans;
    }
};