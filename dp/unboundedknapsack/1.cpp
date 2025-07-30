

// Given a rod of length n inches and an array price[], where price[i] denotes the value of a piece of length i. Your task is to determine the maximum value obtainable by cutting up the rod and selling the pieces.

// Note: n = size of price, and price[] is 1-indexed array.

// Example:

// Input: price[] = [1, 5, 8, 9, 10, 17, 17, 20]
// Output: 22
// Explanation: The maximum obtainable value is 22 by cutting in two pieces of lengths 2 and 6, i.e., 5 + 17 = 22.


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for(int i=1;i<n+1;i++ )
    {
        for(int j=1;j<w+1;j++ ){
    
          if(i<=j){
            dp[i][j]=max(prices[i-1]+dp[i][j-i],dp[i-1][j]);
          }
          else{
            dp[i][j]=dp[i-1][j];
          }
          }
    
       }
    

    return dp[n][n];
}



