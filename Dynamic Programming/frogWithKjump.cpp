//                          frogWithKjump.cpp

#include<bits/stdc++.h>
using namespace std;

int frogJump(int n, vector<int> &A, vector<int> &dp,int k){
    if(k >= n){
        return -1;
    }
    if(n == 0){
        return 0;
   }
   if(dp[n] != -1){
        return dp[n];
   }
   int mini = INT_MAX;
   for(int i = 1; i <= k; i ++){
        if(n-i >= 0){
            int jump = frogJump(n-i,A,dp,k) + abs(A[n] - A[n-i]);
            mini = min(mini,jump);
        }
   }
   return mini;
}

int main(){
    vector<int> A = {10,30,20,10};
    vector<int> dp(A.size(),-1);
    cout<<"Minimum Energy : "<<frogJump(A.size()-1,A,dp,5);
   return 0;
}