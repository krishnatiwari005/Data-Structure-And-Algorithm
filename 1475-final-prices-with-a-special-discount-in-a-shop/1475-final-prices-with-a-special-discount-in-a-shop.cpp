class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        int n = prices.size();
        for (int i = 0; i < n; i++) {
            int finalprice = prices[i];
            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= prices[i]) {
                    finalprice = prices[i] - prices[j];
                    break;
                }
            }
            answer.push_back(finalprice);
        }
        return answer;
    }
};