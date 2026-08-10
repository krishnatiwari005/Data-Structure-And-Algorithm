class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.size() < k) {
            word = word + gen(word);
        }
        return word[k - 1];
    }
    string gen(string s) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = 'a' + ((s[i] - 'a') + 1) % 26;
        }
        return s;
    }
};