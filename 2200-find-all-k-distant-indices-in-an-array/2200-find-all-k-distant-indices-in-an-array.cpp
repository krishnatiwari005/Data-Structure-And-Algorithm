class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> st;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == key) {
                for (int i = 0; i < nums.size(); i++) {
                    if (abs(i - j) <= k) {
                        st.insert(i);
                    }
                }
            }
        }
        return vector<int>(st.begin(), st.end());
    }
};