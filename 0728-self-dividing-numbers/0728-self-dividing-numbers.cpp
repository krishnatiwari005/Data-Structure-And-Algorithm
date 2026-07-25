class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (check(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
    bool check(int num) {
        int t = num;
        while (num != 0) {
            int r = num % 10;
            if (r == 0 || t % r != 0) {
                return false;
            }
            num = num / 10;
        }
        return true;
    }
};