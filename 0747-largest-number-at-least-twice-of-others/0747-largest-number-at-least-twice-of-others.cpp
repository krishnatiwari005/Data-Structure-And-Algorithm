class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_set<int> st;
        int maxel = -1;
        int maxid = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxel) {
                maxel = nums[i];
                maxid = i;
            }
        }
        for (int num : nums) {
            if (num != maxel && num * 2 > maxel) {
                return -1;
            }
        }
        return maxid;
    }
};