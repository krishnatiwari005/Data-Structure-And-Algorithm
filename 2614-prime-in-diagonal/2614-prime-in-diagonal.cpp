class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if ((i == j || i + j == nums.size() - 1) && check(nums[i][j])) {
                    ans = max(ans, nums[i][j]);
                }
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