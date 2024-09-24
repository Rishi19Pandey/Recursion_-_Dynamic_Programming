//                              Sudoku.cpp

#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>> &board, int row, int col , char c){
    for(int i = 0 ; i < 9 ; i++){
        if(board[i][col] == c)
            return false;
        if(board[row][i] == c)
            return false;
        if(board[3*(row/3) + i/3][3*(col/3) + i % 3] == c)
            return false;
    }
    return true;
}

bool Sudoku(vector<vector<char>> &board){
    for(int i = 0 ; i < board.size() ; i++){
        for(int j = 0; j < board[i].size() ; j++){

            if(board[i][j] == '.'){
                for(char c = '1' ; c <= '9' ; c++){
                    if(isValid(board,i,j,c)){
                        board[i][j] = c;
                        if(Sudoku(board) == true){
                            return true;
                        }
                        else{
                            board[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main(){
   vector<vector<char>> board(9,vector<char>(9)); 
//    {
//     {'9','3','4','.','.','.','6','.','.'},
//     {'2','.','.','.','6','.','.','9','4'},
//     {'.','.','.','4','2','.','5','.','.'},
//     {'.','7','3','2','.','5','4','.','.'},
//     {'8','.','.','1','.','.','.','.','.'},
//     {'5','.','2','.','.','8','.','7','.'},
//     {'.','.','1','.','.','6','.','.','.'},
//     {'6','.','.','7','5','2','1','.','.'},
//     {'.','.','7','.','1','.','.','.','.'}
//    };
    int i = 0,j = 0;
    for(i = 0 ; i < 9 ; i++){
        for(j = 0; j < 9 ; j++){
            cin>>board[i][j];
        }
    }

    cout<<endl;
   Sudoku(board);
   cout<<"Solution of SUDOKU is : "<<endl;
   for(i = 0 ; i <  board.size();i++){
    for(j = 0 ; j < board[i].size() ;j++){
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}