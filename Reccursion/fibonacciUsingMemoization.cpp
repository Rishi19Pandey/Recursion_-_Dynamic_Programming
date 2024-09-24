//                      fibonacciUsingMemoization.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int fibo(int num , map<int,long long int> & mp){
    if(mp.find(num) != mp.end()){
        return mp[num];
    }
    else{
        long long int res = fibo(num-1,mp) + fibo(num-2,mp);
        mp.insert({num, res});
        return res;
    }
}

int main(){
   map<int, long long int> mp;
   mp.insert({0,0});
   mp.insert({1,1});
   int num;
   cout<<"Enter a number : ";
   cin>>num;
   cout<<"Fibonacci number is : "<<fibo(num,mp)<<endl;
   cout<<"Fibonacci Series is : "<<endl;
   for(auto it : mp){
    cout<<it.first<<"     "<<it.second<<endl;
   }
   return 0;
}