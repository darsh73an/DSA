#include <iostream>
#include <climits>
using namespace std;

// Function to calculate maximum profit (single buy & single sell)
int maxProfit(int prices[], int n) {

    int bestBuy = INT_MAX;   // minimum price seen so far
    int maxProfit = 0;       // maximum profit so far

    for (int i = 0; i < n; i++) {

        // update best buying price till day i
        bestBuy = min(bestBuy, prices[i]);
        // eg: min(∞,7)=7 , min(7,1)=1 , min(1,5)=1 ...

        // sell on day i and calculate profit
        int profit = prices[i] - bestBuy;
        // eg: 7-7=0 , 1-1=0 , 5-1=4 , 6-1=5 ...

        // update maximum profit
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main() {

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    cout << "Maximum Profit = " << maxProfit(prices, n) << endl;

    return 0;
}
