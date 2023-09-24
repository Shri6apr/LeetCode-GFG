class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;  
        int min_price = INT_MAX;  // Initialize the minimum price.

        for (int i = 0; i < prices.size(); i++) {
            min_price = min(min_price, prices[i]);  // Update the minimum price.
            max_profit = max(max_profit, prices[i] - min_price);  // Update the maximum profit.
        }

        return max_profit;  // Return the maximum profit.
    }
};
