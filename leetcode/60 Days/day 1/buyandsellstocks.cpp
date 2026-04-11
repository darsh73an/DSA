class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = INT_MAX; //-infi value
        int maxProfit = 0;

        for(int i=0; i<prices.size(); i++){
            bestBuy = min(bestBuy,prices[i]); // -000000 or 7 for i=0 7
            // for 2nd index bestBuy will be updated

            //profit for each index
            int profit = prices[i] - bestBuy;

            maxProfit = max(maxProfit,profit);
        }
        return maxProfit;
    }
};