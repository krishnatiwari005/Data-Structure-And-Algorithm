class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[num[i] - '0']++;
        }
        for (int i = 0; i < n; i++) {
            if ((num[i] - '0') != mpp[i]) {
                return false;
            }
        }
        return true;
    }
};