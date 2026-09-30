class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth = 0;
        vector<int> result(seq.size());
        for (int i = 0; i < seq.size(); i++) {
            if (seq[i] == '(') {
                depth++;
                result[i] = ((depth % 2) == 0) ? 0 : 1;
            } else {
                result[i] = ((depth % 2) == 0) ? 0 : 1;
                depth--;
            }
        }
        return result;
    }
};