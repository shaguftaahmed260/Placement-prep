#include <iostream>
#include <vector>
using namespace std;
int buyStocks(vector <int> &prices){
    int mini = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++){
        mini = min(mini,prices[i]);
        int profit = prices[i] - mini;
        maxProfit = max(maxProfit,profit);
    }
    return maxProfit;
}
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << buyStocks(prices) <<" ";
    return 0;
}