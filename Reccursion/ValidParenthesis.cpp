//                      ValidParenthesis.cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ValidParenthesis(int i, int j, int size, vector<string> &ans, string st){
    if(i == size && j == size){
        ans.push_back(st);
        return;
    }
    if(i < size && i >= j){
        ValidParenthesis(i+1,j,size,ans,st+"(");
    }
    if(j < size && j < i){
        ValidParenthesis(i,j+1,size,ans,st+")");
    }
}

int main(){
   int num = 1;
   vector<string> ans;
   string st = "";
   ValidParenthesis(0,0,num,ans,st);
   for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<endl;
   }
   return 0;
}