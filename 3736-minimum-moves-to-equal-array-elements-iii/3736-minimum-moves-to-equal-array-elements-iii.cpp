class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            s += nums[i];
        }
        return n * mx - s;
    }
};