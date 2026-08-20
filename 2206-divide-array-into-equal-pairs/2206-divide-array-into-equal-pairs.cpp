class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (auto x : nums) {
            mpp[x]++;
        }
        int c = 0;
        for (auto it : mpp) {
            if (it.second % 2 == 0) {
                c += it.second / 2;
            }
        }
        return c == nums.size() / 2;
    }
};