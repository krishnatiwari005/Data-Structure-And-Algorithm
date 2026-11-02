class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int minE = nums[0];
        int sum = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] < minE) {
                minE = nums[i];
            }
            sum += nums[i];
        }
        return sum - n * minE;
    }
};