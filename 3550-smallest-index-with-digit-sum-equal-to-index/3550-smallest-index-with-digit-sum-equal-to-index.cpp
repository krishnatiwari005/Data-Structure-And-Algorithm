class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int s = 0;
            while (temp != 0) {
                int r = temp % 10;
                s += r;
                temp /= 10;
            }
            if (s == i) {
                return i;
            }
        }
        return -1;
    }
};