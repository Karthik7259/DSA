// Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
// A common subsequence of two strings is a subsequence that is common to both strings.

 

// Example 1:

// Input: text1 = "abcde", text2 = "ace" 
// Output: 3  
// Explanation: The longest common subsequence is "ace" and its length is 3.



#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(text1[i-1]==text2[j-1]) dp[i][j]=!1+dp[i-1][j-1];

            else  dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }


    return dp[n][m];

}