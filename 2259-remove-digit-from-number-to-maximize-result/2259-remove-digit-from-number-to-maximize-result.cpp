class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (number[i] == digit) {
                string temp = number;
                temp.erase(i, 1);
                if (temp > ans) {
                    ans = temp;
                }
            }
        }
        return ans;
    }
};