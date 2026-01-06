#include <iostream>
#include <climits>
using namespace std;

void findProfit(int *prices, int n){

    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for (int i = 1; i < n; i++)
    {
       bestBuy[i] = min(bestBuy[i-1], prices[i - 1]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        cout<<currProfit << endl;
        maxProfit = max(maxProfit,currProfit); 
    }
    
    cout<<"Max Profit is " << maxProfit;   
}

int main(){

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    findProfit(prices, n);

    return 0;
}