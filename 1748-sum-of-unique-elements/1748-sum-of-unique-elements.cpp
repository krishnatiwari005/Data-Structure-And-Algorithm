class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int s = 0;
        for (int x : nums) {
            mpp[x]++;
        }
        for (auto it : mpp) {
            if (it.second == 1) {
                s += it.first;
            }
        }
        return s;
    }
};