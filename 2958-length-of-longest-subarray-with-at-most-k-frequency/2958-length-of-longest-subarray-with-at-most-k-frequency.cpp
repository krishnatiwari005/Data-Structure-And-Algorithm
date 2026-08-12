class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> found;
        int ans = INT_MIN;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            found[nums[i]]++;
            while (found[nums[i]] > k) {
                found[nums[j]]--;
                j++;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};