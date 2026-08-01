#include<iostream>
using namespace std; 

int maxProfit(int prices[], int n)
{
    int min_price = prices[0];
    int max_profit = 0 ; 


    for(int i=1; i<n; i++)
    {
        int curr_profit = prices[i] - min_price;
        max_profit = max(curr_profit, max_profit);

        min_price = min(min_price, prices[i]);

    }
    return max_profit;

}

int main()
{
    int n = 6;
    int prices[n] = {7,1,5,3,6,4};

    int result = maxProfit(prices, n);
    cout << "Maximum Profit: " << result << endl;

    return 0; 
}