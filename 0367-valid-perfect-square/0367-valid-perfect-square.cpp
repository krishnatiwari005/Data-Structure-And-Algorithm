class Solution {
public:
    bool isPerfectSquare(int num) {
        long beg = 0;
        long end = num;
        while (beg <= end) {
            long mid = (beg + end) / 2;
            long sq = mid * mid;
            if (sq == num) {
                return true;
            } else if (sq > num) {
                end = mid - 1;
            } else {
                beg = mid + 1;
            }
        }
        return false;
    }
};