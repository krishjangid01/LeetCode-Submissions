class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_Price = INT_MAX;
        int max_Profit = 0;
        for (int i = 0;i<n ; i++){
            if(min_Price>prices[i]){
                min_Price = prices[i];
            }
            int current_Profit = prices[i] - min_Price;
            max_Profit = max(max_Profit, current_Profit);
        }
        return max_Profit;
    }
};