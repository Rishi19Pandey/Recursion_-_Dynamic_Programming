//                              frogJump.cpp

#include<bits/stdc++.h>
using namespace std;

int frogJump(int n, vector<int> &A, vector<int> &dp){
    if(n == 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int oneJump = frogJump(n-1,A,dp) + abs(A[n] - A[n-1]);
    int twoJump = INT_MAX;
    if(n-2 >= 0){
        twoJump = frogJump(n-2,A,dp) + abs(A[n] - A[n-2]);
    }
    return dp[n] = min(oneJump,twoJump);
}

int main(){
   vector<int> A = {30,10,60,10,60,50};
   vector<int> dp(A.size(),-1);
   cout<<"Minimum Energy  : "<<frogJump(A.size()-1,A,dp);
   return 0;
}