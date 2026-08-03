class Solution {
public:
    bool judgeSquareSum(int c) {
        long a = 0;
        long b = sqrt(c);
        long sum = a * a + b * b;
        while (a <= b) {
            sum = a * a + b * b;
            if (sum == c) {
                return true;
            } else if (sum > c) {
                b--;
            } else {
                a++;
            }
        }
        return false;
    }
};