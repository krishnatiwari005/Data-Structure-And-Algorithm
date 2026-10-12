class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int i = nums.size() - 1;
        vector<int> ans(nums.size());
        while (left <= right) {
            int leftside = nums[left] * nums[left];
            int rightside = nums[right] * nums[right];
            if (leftside < rightside) {
                ans[i] = rightside;
                right--;
            } else {
                ans[i] = leftside;
                left++;
            }
            i--;
        }
        return ans;
    }
};