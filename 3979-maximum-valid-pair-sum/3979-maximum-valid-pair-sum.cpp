class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        long long ans = LLONG_MIN;
        int mx = nums[0];
        for (int i = k; i < nums.size(); i++) {
            mx = max(mx, nums[i - k]);
            ans = max(ans, 1LL * (mx + nums[i]));
        }
        return ans;
    }
};