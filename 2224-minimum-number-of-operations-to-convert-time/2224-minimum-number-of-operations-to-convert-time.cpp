class Solution {
public:
    int timeTomin(string time) {
        int hour = stoi(time.substr(0, 2));
        int min = stoi(time.substr(3));
        return hour * 60 + min;
    }
    int convertTime(string current, string correct) {
        int count = 0;
        int currentmin = timeTomin(current);
        int correctmin = timeTomin(correct);

        int minDiff = correctmin - currentmin;

        while (minDiff != 0) {
            if (minDiff >= 60) {
                minDiff -= 60;
                count++;
            }
            if (minDiff >= 15 && minDiff < 60) {
                minDiff -= 15;
                count++;
            }
            if (minDiff >= 5 && minDiff < 15) {
                minDiff -= 5;
                count++;
            }
            if (minDiff >= 1 && minDiff < 5) {
                minDiff -= 1;
                count++;
            }
        }
        return count;
    }
};