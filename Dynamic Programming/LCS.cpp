//                      LCS.cpp

#include<bits/stdc++.h>
using namespace std;

string LCS(string s , string t){
    int size1 = t.size() , size2 = s.size(), i = 0, j = 0;
    int dp[size1+1][size2+1];
    for(i = 0; i <= size1 ; i++){
        for(j = 0 ; j <= size2 ; j++){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(s[j-1] == t[i-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }
    int size = dp[size1][size2] , k = size-1;
    if(size == 0){
        return "";
    }
    string ans(size,'a');
    i = size1, j = size2;
    while(i > 0 && j > 0){
        if(s[j-1] == t[i-1]){
            ans[k] = s[j-1];
            k--;
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    return ans;

}

int main(){
    string s , t ;
    cout<<"Enter String S : ";
    cin>>s;
    cout<<"Enter String T : ";
    cin>>t;
    cout<<"Longest Subsequence is : "<<LCS(s,t);
   return 0;
}