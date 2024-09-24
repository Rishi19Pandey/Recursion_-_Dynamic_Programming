//                          N_Queen.cpp

#include<bits/stdc++.h>
using namespace std;

bool isTrue(int row , int col, vector<string> &Board){
    int i = row, j = col, n = Board[0].size()-1;
    while(j>0){
        if(Board[i][j-1] == 'Q'){
            return false;
        }
        else{
            j--;
        }
    }
    i = row, j = col;
    while(i > 0 && j > 0){
        if(Board[i-1][j-1] == 'Q'){
            return false;
        }
        else{
            i--;
            j--;
        }
    }
    i = row, j = col;
    while(i < n && j > 0){
        if(Board[i+1][j-1] == 'Q'){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

void nQueen(int col, vector<vector<string>> &ans, vector<string> &Board, int num ){
    if(col == num){
        ans.push_back(Board);
        return;
    }
    for(int i = 0; i < num; i++){
        if(isTrue(i,col,Board)){
            Board[i][col] = 'Q';
            nQueen(col+1,ans,Board,num);
            Board[i][col] = '.';
        }
    }
}

int main(){
   int i = 0,j = 0, num = 0;
   cout<<"Enter The Size Of Board : ";
   cin>>num;
   vector<vector<string>> ans;
   vector<string> Board(num);
   string s(num,'.');
   for(i = 0; i < num; i++){
        Board[i] = s;
   }
   nQueen(0,ans,Board,num);
   for(i= 0 ; i < ans.size();i++){
    cout<<"Answer is : "<<endl;
    for(j = 0; j< ans[i].size();j++){
        cout<<ans[i][j]<<endl;
    }
    cout<<endl;
   }
   cout<<"number of possibilities are : "<<ans.size()<<endl;
   return 0;
}