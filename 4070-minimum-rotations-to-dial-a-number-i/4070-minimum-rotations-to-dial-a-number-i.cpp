class Solution {
public:
    int minRotations(string s) {
        int curr = 0;
        int rotate = 0;
        for (char ch : s) {
            int diff = abs(curr - (ch - '0'));
            rotate += min(diff, 10 - diff);
            curr = (ch - '0');
        }
        return rotate;
    }
};