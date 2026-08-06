class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c = 0;
        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            if (check(allowed, temp)) {
                c++;
            }
        }
        return c;
    }
    bool check(string allowed, string temp) {
        vector<int> fr(26, 0);
        for (char ch : allowed) {
            fr[ch - 'a']++;
        }
        vector<int> x(26, 0);
        for (char ch : temp) {
            x[ch - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (fr[i] == 0 && x[i] > 0) {
                return false;
            }
        }
        return true;
    }
};