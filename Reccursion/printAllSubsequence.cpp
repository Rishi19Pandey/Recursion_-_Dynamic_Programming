//          printAllSubsequence.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printAllSequence(int index ,vector<int> vec , int size , vector<int> ans){
    if(index >= size){
        for(auto it : ans){
        cout<<it<<" ";
        }
         if(ans.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ans.push_back(vec[index]);
    printAllSequence(index+1 , vec , size , ans);
    ans.pop_back();
    printAllSequence(index+1 , vec ,size , ans);
}

int main(){
   vector<int> ans ,vec = {3,1,2};
   printAllSequence(0,vec , vec.size() , ans);
   return 0;
}