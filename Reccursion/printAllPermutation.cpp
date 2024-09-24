//                      printAllPermutation.cpp

#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int> &vec , vector<int> &con , vector<int> &aux, vector<vector<int>> &res){
   if(con.size() == vec.size()){
      res.push_back(con);
      return;
   }
   for(int i = 0 ; i < vec.size() ; i++){
      if(!aux[i]){
         con.push_back(vec[i]);
         aux[i] = 1;
         permutation(vec,con,aux,res);
         con.pop_back();
         aux[i] = 0;
      }
   }
}

vector<vector<int>> printAllPermutation(vector<int> &vec){
    vector<vector<int>> res;
    vector<int> aux(vec.size(),0);
    vector<int> con;
    permutation(vec,con,aux,res);
    return res;
}

int main(){
   vector<int> vec = {1,2,3};
   vector<vector<int>>ans = printAllPermutation(vec);
   int i = 0 , j = 0;
   for(i = 0; i < ans.size() ; i++){
     for(j = 0 ; j < ans[i].size() ; j++){
        cout<<ans[i][j]<<" ";
     }
     cout<<endl;
   }
   return 0;
}