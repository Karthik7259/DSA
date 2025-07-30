// Given an integer array coins[ ] representing different denominations of currency and an integer sum, find the number of ways you can make sum by using different combinations from coins[ ]. 
// Note: Assume that you have an infinite supply of each type of coin. Therefore, you can use any coin as many times as you want.
// Answers are guaranteed to fit into a 32-bit integer. 

// Examples:

// Input: coins[] = [1, 2, 3], sum = 4
// Output: 4
// Explanation: Four Possible ways are: [1, 1, 1, 1], [1, 1, 2], [2, 2], [1, 3].


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
    for(int i=0;i<n+1;i++){
        dp[i][0]=1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j){
                dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j];

            }
        }
    }


    return dp[n][sum];



}

