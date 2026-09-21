class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int x : nums) {
            mpp[x]++;
        }
        vector<int> ans;
        for (int i = 1; i <= nums.size(); i++) {
            if (mpp.find(i) == mpp.end(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};