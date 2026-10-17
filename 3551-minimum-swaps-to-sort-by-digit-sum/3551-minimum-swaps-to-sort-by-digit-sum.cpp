class Solution {
public:
    int sum(int n) {
        int s = 0;
        while (n > 0) {
            s += n % 10;
            n /= 10;
        }
        return s;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted = nums;

        sort(sorted.begin(), sorted.end(), [&](int a, int b) {
            int sa = sum(a);
            int sb = sum(b);

            if (sa == sb) {
                return a < b;
            }
            return sa < sb;
        });

        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++) {
            pos[nums[i]] = i;
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != sorted[i]) {
                count++;

                int j = pos[sorted[i]];
                pos[nums[i]] = j;
                pos[sorted[i]] = i;

                swap(nums[i], nums[j]);
            }
        }

        return count;
    }
};