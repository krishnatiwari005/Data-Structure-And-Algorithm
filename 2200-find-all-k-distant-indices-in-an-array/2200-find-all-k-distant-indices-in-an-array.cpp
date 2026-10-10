class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        int right = 0;
        int n = nums.size();
        for (int j = 0; j < n; j++) {
            if (nums[j] == key) {
                int left = max(right, j - k);
                right = min(n, j + k + 1);
                for (int i = left; i < right; i++) {
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};