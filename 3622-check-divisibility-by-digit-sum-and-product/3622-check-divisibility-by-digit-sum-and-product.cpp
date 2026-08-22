class Solution {
public:
    bool checkDivisibility(int n) {
        int s = 0;
        int p = 1;
        int r = 0;
        int t = n;
        while (n != 0) {
            r = n % 10;
            s += r;
            p *= r;
            n /= 10;
        }
        return (t % (p + s)) == 0;
    }
};