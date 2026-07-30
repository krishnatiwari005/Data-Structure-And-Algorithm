class Solution {
public:
    int minimumPushes(string word) {
        int l = word.size();
        int a = l / 8;
        if (a == 0) {
            return l;
        } else if (a == 1) {
            return 8 + ((l % 8) * (a + 1));
        } else if (a == 2) {
            return 8 + 16 + ((l % 8) * (a + 1));
        } else {
            return 8 + 16 + 24 + ((l % 8) * (a + 1));
        }
        return -1;
    }
};