//          SubsetSum.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SubsetSum(int index , vector<int> &vec , int size , int sum , vector<int> &ans){
    if(index >= size){
        ans.push_back(sum);
        return;
    }
    SubsetSum(index+1 , vec , size , sum+vec[index],ans);
    SubsetSum(index+1 , vec , size , sum,ans);
}

int main(){
   vector<int> ans ,vec = {2,3};
   int sum = 0;
   SubsetSum(0 ,vec , vec.size() , sum , ans);
   cout<<"Answer => ";
   sort(ans.begin(),ans.end());
   for(auto it : ans){
        cout<<it<<" ";
   }
   return 0;
}

