class Solution {
public:
    int findDayOfYear(string date, vector<int>& CumMonthDays) {
        int month = stoi(date.substr(0, 2));
        int days = stoi(date.substr(3));

        return CumMonthDays[month - 1] + days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        vector<int> monthDays = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
        vector<int> CumMonthDays(13, 0);

        CumMonthDays[1] = 31;

        for (int i = 2; i <= 12; i++) {
            CumMonthDays[i] = CumMonthDays[i - 1] + monthDays[i - 1];
        }

        int arriveAliceDay = findDayOfYear(arriveAlice, CumMonthDays);
        int leaveAliceDay = findDayOfYear(leaveAlice, CumMonthDays);
        int arriveBobDay = findDayOfYear(arriveBob, CumMonthDays);
        int leaveBobDay = findDayOfYear(leaveBob, CumMonthDays);

        int overLapDays = min(leaveAliceDay, leaveBobDay) -
                          max(arriveAliceDay, arriveBobDay) + 1;
        return overLapDays < 0 ? 0 : overLapDays;
    }
};