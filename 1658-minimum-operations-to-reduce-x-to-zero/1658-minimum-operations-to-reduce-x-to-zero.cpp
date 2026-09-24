class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        unordered_map<int, int> m;
        m[0] = -1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            m[sum] = i;
        }
        int remaining = sum - x;
        int longestsubarray = INT_MIN;
        sum = 0;
        if (remaining < 0)
            return -1;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int findsum = sum - remaining;
            if (m.find(findsum) != m.end()) {
                longestsubarray = max(longestsubarray, i - m[findsum]);
            }
        }
        return longestsubarray == INT_MIN ? -1 : (n - longestsubarray);
    }
};