class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }
        int ans = sum;
        unordered_set<int> seen(nums.begin(), nums.end());
        while (seen.count(ans)) {
            ans++;
        }
        return ans;
    }
};