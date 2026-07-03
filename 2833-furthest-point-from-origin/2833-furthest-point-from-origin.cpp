class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x = 0;
        int cntleft = 0;
        int cntrgt = 0;
        int cnt = 0;
        for (char ch : moves) {
            if (ch == 'L') {
                cntleft++;
            }
            if (ch == 'R') {
                cntrgt++;
            }
            if (ch == '_') {
                cnt++;
            }
        }
        if (cntleft > cntrgt) {
            cntleft += cnt;
        } else {
            cntrgt += cnt;
        }
        x = cntleft - cntrgt;
        return abs(x);
    }
};