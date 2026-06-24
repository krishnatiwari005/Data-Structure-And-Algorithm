class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }
        int s = 0;
        for (auto it : mpp) {
            int n = it.second;
            s += n * (n - 1) / 2;
        }
        return s;
    }
};