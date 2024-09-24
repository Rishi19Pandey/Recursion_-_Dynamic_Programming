#include <bits/stdc++.h>
using namespace std;

void power(int i, vector<int> &A, int sum, vector<int> &ans){
    if(i == A.size()){
        if(sum == 0){
            for(auto i : ans){
                cout<<i<<" ";
            }
            return;
        }
    }
    else if(A[i] <= sum){
        ans.push_back(A[i]);
        power(i,A,sum-A[i],ans);
    }
    else{
        ans.pop_back();
        power(i+1,A,sum,ans);
    }
}

int main()
{
    vector<int> ans;
    vector<int>A={1,2,1};
    power(0,A,2,ans);
    return 0;
}
