// Longest Common Substring


// You are given two strings s1 and s2. Your task is to find the length of the longest common substring among the given strings.

// Examples:

// Input: s1 = "ABCDGH", s2 = "ACDGHR"
// Output: 4
// Explanation: The longest common substring is "CDGH" with a length of 4.


#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                res=max(res,dp[i][j]);
            }else{
                dp[i][j]=0;
            }
        }
    }

    return res;
}