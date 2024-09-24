//                        powerSet.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pSet(int i, vector<int>&vec, vector<vector<int>> res, vector<int>& aux){
    if(i == vec.size()){
        for(auto it : aux){
            cout<<it<<" ";
        }
        cout<<endl;
        res.push_back(aux);
        return;
    }
    aux.push_back(vec[i]);
    pSet(i+1 , vec, res, aux);
    aux.pop_back();
    pSet(i+1, vec, res, aux);
}

vector<vector<int>> powerSet(vector<int> & vec){
    vector<vector<int>> res;
    vector<int> aux;
    pSet(0,vec,res,aux);
    return res;
}

int main(){
   vector<int> vec = {1,2,3,4};
    vector<vector<int>> ans;
    ans = powerSet(vec);
    // for(int i = 0; i < ans.size();i++){
    //     for(int j = 0; j < ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<"Last";
   return 0;
}