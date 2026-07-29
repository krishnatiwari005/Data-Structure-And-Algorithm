class Solution {
public:
    bool checkIfPangram(string sentence) {
        int l = sentence.size();
        vector<int> alpha(26, 0);
        for (int i = 0; i < l; i++) {
            alpha[sentence[i] - 'a']++;
        }
        for (int x : alpha) {
            if (x == 0) {
                return false;
            }
        }
        return true;
    }
};