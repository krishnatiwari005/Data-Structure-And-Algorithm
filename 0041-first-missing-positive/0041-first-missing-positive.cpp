class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> freq(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0 && nums[i] <= nums.size()) {
                freq[nums[i]] = 1;
            }
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (freq[i] == 0) {
                return i;
            }
        }
        return nums.size() + 1;
    }
};