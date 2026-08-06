class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<string> temp;
        for (int i = 0; i < words.size(); i++) {
            string t = "";
            unordered_set<char> st;
            for (char ch : words[i]) {
                st.insert(ch);
            }
            for (char ch : st) {
                t += ch;
            }
            sort(t.begin(), t.end());
            temp.push_back(t);
        }
        int c = 0;
        for (int i = 0; i < temp.size(); i++) {
            for (int j = i + 1; j < temp.size(); j++) {
                if (temp[i] == temp[j]) {
                    c++;
                }
            }
        }
        return c;
    }
};