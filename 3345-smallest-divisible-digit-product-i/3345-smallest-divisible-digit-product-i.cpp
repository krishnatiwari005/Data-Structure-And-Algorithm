class Solution {
public:
    int smallestNumber(int n, int t) {
        while (n <= 100) {
            int temp = n;
            int p = 1;
            int r;
            while (temp != 0) {
                r = temp % 10;
                p *= r;
                temp /= 10;
            }
            if (p % t == 0) {
                return n;
            } else {
                n++;
            }
        }
        return 0;
    }
};