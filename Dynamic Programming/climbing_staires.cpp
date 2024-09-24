#include<bits/stdc++.h>
using namespace std;

int climbStaires(int num, vector<int> &A){
    if(A[num] != 0) return A[num];
    A[num] = climbStaires(num-1,A) + climbStaires(num-2,A);
    return A[num];
}

int climbingStaires(int num){
    if(num <= 0) return 0;
    vector<int> A(num+1,0);
    A[0] = 1;
    A[1] = 1;
    return climbStaires(num,A);
}

int main(){
   int num;
   cout<<"Enter number of Stiares : ";
   cin>>num;
   cout<<climbingStaires(num);
   return 0;
}