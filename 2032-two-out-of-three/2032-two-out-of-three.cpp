class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        bool check[3][101] = {};
        vector<int> res;
        for (auto n : nums1) {
            check[0][n] = true;
        }
        for (auto n : nums2) {
            check[1][n] = true;
        }
        for (auto n : nums3) {
            check[2][n] = true;
        }
        for (int i = 1; i <= 100; i++) {
            if (check[0][i] + check[1][i] + check[2][i] > 1) {
                res.push_back(i);
            }
        }
        return res;
    }
};