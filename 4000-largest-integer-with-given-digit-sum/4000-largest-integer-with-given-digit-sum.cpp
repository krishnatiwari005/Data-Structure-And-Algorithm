class Solution {
public:
    int largestInteger(int n, int s) {
        int m = -1;
        if (s == 0)
            return 0;
        for (int i = 0; i <= 99999; i++) {
            if (sum(i) == s && count(i) == n) {
                m = max(m, i);
            }
        }
        return m;
    }
    long sum(int num) {
        int r = 0, s = 0;
        while (num != 0) {
            r = num % 10;
            s += r;
            num /= 10;
        }
        return s;
    }
    int count(int num) {
        int c = 0;
        while (num != 0) {
            c++;
            num /= 10;
        }
        return c;
    }
};