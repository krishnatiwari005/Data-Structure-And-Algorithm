class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int total = ((i + 1) * (n - i));
            int odd = (total + 1) / 2;
            ans += odd * arr[i];
        }
        return ans;
    }
};