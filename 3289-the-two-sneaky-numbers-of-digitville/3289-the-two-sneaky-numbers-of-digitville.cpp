class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int x : nums) {
            mpp[x]++;
        }
        vector<int> ans;
        for (auto c : mpp) {
            if (c.second == 2) {
                ans.push_back(c.first);
            }
        }
        return ans;
    }
};