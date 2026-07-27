class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int mx = INT_MIN;
        for (int x : nums) {
            freq[x]++;
            mx = max(mx, freq[x]);
        }
        int c = 0;
        for (auto x : freq) {
            if (x.second == mx) {
                c += mx;
            }
        }
        return c;
    }
};