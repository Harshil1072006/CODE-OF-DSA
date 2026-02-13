#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfitVal = 0;
    int bestBuy = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfitVal = max(maxProfitVal, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfitVal;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;

    return 0;
}