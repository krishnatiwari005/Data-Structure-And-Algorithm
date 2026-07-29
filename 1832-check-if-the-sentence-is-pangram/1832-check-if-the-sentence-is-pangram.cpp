class Solution {
public:
    bool checkIfPangram(string sentence) {
        int l = sentence.size();
        int count = 0;
        vector<bool> alpha(26, false);
        for (int i = 0; i < l; i++) {
            if (alpha[sentence[i] - 'a'] == false) {
                alpha[sentence[i] - 'a'] = true;
                count++;
                if (count == 26) {
                    return true;
                }
            }
        }
        return false;
    }
};