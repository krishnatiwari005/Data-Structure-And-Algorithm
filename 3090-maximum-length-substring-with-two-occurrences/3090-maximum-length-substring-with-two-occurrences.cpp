class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = INT_MIN;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j <= s.size(); j++) {
                if (check(s.substr(i, j))) {
                    int l = s.substr(i, j).size();
                    ans = max(l, ans);
                }
            }
        }
        return ans;
    }
    bool check(string s) {
        unordered_map<int, int> freq;
        for (char ch : s) {
            freq[ch]++;
            if (freq[ch] > 2) {
                return false;
            }
        }
        return true;
    }
};