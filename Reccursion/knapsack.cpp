//             knapsack.cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int knapSack(int i , vector<int> &p , vector<int> &w, int wt){
    if(i == p.size()){
        return 0 ;
    }
    else if(w[i]>wt){
        knapSack(i+1,p,w,wt);
    }
    else
        return max(p[i]+knapSack(i,p,w,wt-w[i]) , knapSack(i+1,p,w,wt));
}

int main(){
   vector<int> p={1,2,5,6};
   vector<int> w={2,3,4,6};
   int wt = 8;
   int maxProfit = knapSack(0,p,w,wt);
   cout<<"Total Profit is => "<<maxProfit<<endl;
   return 0;
}