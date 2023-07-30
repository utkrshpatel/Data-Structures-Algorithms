/* Problem Statement - You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.

Find the maximum profit you can achieve. You may complete at most k transactions: i.e. you may buy at most k times and sell at most k times.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).


Sample Test Case :-

Input: k = 2, prices = [3,2,6,5,0,3]
Output: 7
Explanation: Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4. Then buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.

Difficulty Level - Hard

*/

#include <iostream>
#include <vector>
using namespace std;

int f(vector<int>& prices, int ind, int k,int transaction,vector<vector<int>>&dp) {
    if(ind >= prices.size()) {
        return 0;
    }

    if(transaction >= k*2) {
        return 0;
    }
    if(dp[ind][transaction] != -1) {
        return dp[ind][transaction];
    }


    if(transaction % 2 == 0) {
        int buy = -prices[ind] + f(prices,ind+1,k,transaction+1,dp);
        int buyLater = f(prices,ind+1,k,transaction,dp);
        return dp[ind][transaction]= max(buy,buyLater);
        
    }

    else {
        int sell = prices[ind] + f(prices,ind+1,k,transaction+1,dp);
        int sellLater = f(prices,ind+1,k,transaction,dp);
        return dp[ind][transaction]= max(sell,sellLater);   
    }




}

int maxProfit(int k, vector<int>& prices) {
    vector<vector<int>>dp(prices.size(),vector<int>(2*k,-1));
     return f(prices,0,k,0,dp);
        
}


int main() {
    vector<int>arr = {3,2,6,5,0,3};
   cout<<maxProfit(2,arr);
}