class Solution {
public:
    int maxProfit(vector<int>& prices) {
            if (prices.empty()) {
        return 0;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); ++i) {
        // Update the minimum price seen so far
        minPrice = min(minPrice, prices[i]);

        // Calculate the profit if we sell at the current price
        int profit = prices[i] - minPrice;

        // Update the maximum profit if selling at the current price yields a higher profit
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
    }
};