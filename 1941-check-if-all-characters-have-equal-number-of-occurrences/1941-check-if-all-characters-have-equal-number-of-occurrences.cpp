class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mpp;
        for (char ch : s) {
            mpp[ch]++;
        }
        int check = mpp[s[0]];
        for (auto it : mpp) {
            if (it.second != check) {
                return false;
            }
        }
        return true;
    }
};