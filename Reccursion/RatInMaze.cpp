//                          RatInMaze.cpp

#include<bits/stdc++.h>
using namespace std;

void RatInMaze(int i, int j, int size, vector<vector<int>> &B,vector<vector<int>> &vis,vector<string> &ans, string st){
    if(i == size-1 && j == size-1){
        ans.push_back(st);
        return;
    }
    if(i < size-1 && B[i+1][j] == 1 && vis[i+1][j] == 0){
        vis[i][j] = 1;
        RatInMaze(i+1,j,size,B,vis,ans,st+"D");
        vis[i][j] = 0;
    }
    if(j > 0 && B[i][j-1] == 1 && vis[i][j-1] == 0){
        vis[i][j] = 1;
        RatInMaze(i,j-1,size,B,vis,ans,st+"L");
        vis[i][j] = 0;
    }
    if(j < size-1 && B[i][j+1] == 1 && vis[i][j+1] == 0){
        vis[i][j] =  1;
        RatInMaze(i,j+1,size,B,vis,ans,st+"R");
        vis[i][j] = 0;
    }
    if(i > 0 && B[i-1][j] == 1 && vis[i-1][0] == 0){
        vis[i][j] = 1;
        RatInMaze(i-1,j,size,B,vis,ans,st+"U");
        vis[i][j] = 0;
    }
}

int main(){
   int n = 4;
   vector<vector<int>>vis(n , vector<int> (n)), B = {
    {1,0,0,0},
    {1,1,0,1},
    {1,1,0,0},
    {0,1,1,1},
   };
   vector<string> ans;
   string st = "";
   for(int i = 0 ; i< n; i++){
    for(int j = 0; j < n ; j++){
        vis[i][j] = 0;
    }
   }

   RatInMaze(0,0,n,B,vis,ans,st);
   for(int i = 0 ; i< n; i++){
       cout<<ans[i]<<endl;
   }
   return 0;
}