//              combinationSum.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void combsum(int index , vector<int> &vec , int sum , vector<int> &ds , vector<vector<int>>&ans){
    if(index == vec.size()){
        if(sum == 0){
            ans.push_back(ds);
        }
        return;
    }
    else if(vec[index]<=sum){
        ds.push_back(vec[index]);
        combsum(index,vec,sum-vec[index],ds,ans);
        ds.pop_back();
    }
    combsum(index+1,vec,sum,ds,ans);
}

int main(){
   vector<int>ds, vec = {2,3,6,7};
   int sum = 7;
   vector<vector<int>> ans;
   combsum(0,vec,sum,ds,ans);
   for(int i = 0 ; i< ans.size() ; i++){
        for(int j = 0 ; j < ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}