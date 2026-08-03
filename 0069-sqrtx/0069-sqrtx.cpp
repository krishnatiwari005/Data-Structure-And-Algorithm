class Solution {
public:
    int mySqrt(int x) {
        long a = 0;
        long b = x;
        long m = (a + b) / 2;
        while (a <= b) {
            m = (a + b) / 2;
            if (m * m == x) {
                return m;
            } else if (m * m > x) {
                b = m - 1;
            } else {
                a = m + 1;
            }
        }
        return b;
    }
};