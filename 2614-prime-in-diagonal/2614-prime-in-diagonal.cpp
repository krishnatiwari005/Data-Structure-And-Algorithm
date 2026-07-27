class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (check(nums[i][i])) {
                ans = max(ans, nums[i][i]);
            }
            if (i != n - 1 - i && check(nums[i][n - 1 - i])) {
                ans = max(ans, nums[i][n - 1 - i]);
            }
        }
        return ans;
    }
    bool check(int num) {
        if (num < 2) {
            return false;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
};