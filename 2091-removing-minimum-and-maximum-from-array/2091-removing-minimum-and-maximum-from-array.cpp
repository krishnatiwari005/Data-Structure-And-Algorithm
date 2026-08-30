class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int lowest = nums[0];
        int highest = nums[0];
        int indexlow = 0;
        int indexhigh = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < lowest) {
                lowest = nums[i];
                indexlow = i;
            }
            if (nums[i] > highest) {
                highest = nums[i];
                indexhigh = i;
            }
        }
        int front = max(indexlow, indexhigh) + 1;
        int back = n - min(indexlow, indexhigh);
        int both;
        if (indexlow < indexhigh) {
            both = (indexlow + 1) + (n - indexhigh);
        } else {
            both = (indexhigh + 1) + (n - indexlow);
        }
        return min({front, back, both});
    }
};