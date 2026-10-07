class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 1; i < n; i++) {
            int prev = nums[i];
            nums[i] = max(nums[i - 1] + 1, nums[i]);
            count += abs(prev - nums[i]);
        }
        return count;
    }
};