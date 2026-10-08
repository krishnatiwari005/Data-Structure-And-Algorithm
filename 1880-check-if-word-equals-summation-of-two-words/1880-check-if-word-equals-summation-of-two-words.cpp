class Solution {
public:
    int countnum(string s) {
        int count = 0;
        for (char ch : s) {
            count = count * 10 + (ch - 'a');
        }
        return count;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return countnum(firstWord) + countnum(secondWord) == countnum(targetWord);
    }
};