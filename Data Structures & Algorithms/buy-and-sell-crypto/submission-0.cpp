class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int minprice = INT_MAX;
        for(int i = 0 ; i<n ; i++){
             minprice = min(minprice , prices[i]);
             maxProfit = max(maxProfit , prices[i]-minprice);
        }
        return maxProfit;
    }
};
