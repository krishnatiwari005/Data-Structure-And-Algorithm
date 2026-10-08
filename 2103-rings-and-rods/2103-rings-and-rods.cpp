class Solution {
public:
    bool check(string s) {
        int red = 0, green = 0, blue = 0;
        for (char ch : s) {
            if (ch == 'R')
                red++;
            else if (ch == 'G')
                green++;
            else
                blue++;
        }
        return (red > 0 && blue > 0 && green > 0);
    }
    int countPoints(string rings) {
        int n = rings.size();
        unordered_map<int, string> mpp;
        for (int i = 0; i < n; i += 2) {
            mpp[rings[i + 1] - '0'] += rings[i];
        }
        int count = 0;
        for (auto it : mpp) {
            if (check(it.second)) {
                count++;
            }
        }
        return count;
    }
};