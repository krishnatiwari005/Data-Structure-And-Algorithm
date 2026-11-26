class Solution {
public:
    bool canAliceWin(int n) {
        int count = 10;
        int i = 0;
        while (n > 0) {
            n = n - count;
            if (n == 0) {
                if (i % 2 == 0) {
                    return true;
                }
            }
            if (n < 0) {
                if (i % 2 != 0) {
                    return true;
                } else {
                    return false;
                }
            }
            count--;
            i++;
        }
        return false;
    }
};