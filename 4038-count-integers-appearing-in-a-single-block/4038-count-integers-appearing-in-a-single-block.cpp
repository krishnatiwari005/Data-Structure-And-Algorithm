class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                mpp[nums[i]]++;
            }
        }
        int ans = 0;
        for (auto it : mpp) {
            if (it.second == 1) {
                ans++;
            }
        }
        return ans;
    }
};