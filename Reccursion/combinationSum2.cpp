//                  combinationSum2.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void combinationSum2(int index , vector<int> &vec , int target , vector<int> &ds , vector<vector<int>> &ans){
    if(target == 0){
        ans.push_back(ds);
        return;
    }
    for(int i = index ; i < vec.size() ; i++){
        if(i>index && vec[i]==vec[i-1]){
            continue;
        }
        if(vec[i]>target){
            break;
        }
        ds.push_back(vec[i]);
        combinationSum2(i+1,vec,target-vec[i],ds,ans);
        ds.pop_back();
    }
}

int main(){
   vector<int> vec = {1,2,1,2,1,5,4,7,6,4,3,2};
   int target = 8;
   vector<int> ds;
   vector<vector<int>> ans;

   // First Sort Give Array

    sort(vec.begin() , vec.end());


   combinationSum2(0,vec,target,ds,ans);
   for(int i = 0 ; i< ans.size() ; i++){
        for(int j = 0 ; j< ans[i].size() ; j++){
                cout<<ans[i][j]<<" ";
        }
        cout<<endl;
   }
   return 0;
}