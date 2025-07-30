// Printing Longest Common Subsequence

// Given two sequences, print the longest subsequence present in both of them.

// Examples: 

// LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3. 
// LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4.


#include<bits/stdc++.h>
using namespace std;
int main(){

   int i=n;
   int j=m;
   while(i>0 && j>0){

      if(text1[i-1]==text2[j-1]){
        s1+=text1[i-1];
        i--;
        j--;

      }else{
        if(dp[i-1][j]>dp[i][j-1]){
          s1+=text1[i-1];
          i--;
        }else{
            s1+=text2[j-1];
            j--;
        }
      }


   }

   reverse(s1.begin(),s1.end());


   return s1;


   

}
