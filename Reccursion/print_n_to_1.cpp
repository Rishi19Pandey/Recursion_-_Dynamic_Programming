//                      print_n_to_1.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun1(int i, int num){
    if(i==num){
        cout<<i<<" ";
        return;
    }
    fun1(i+1,num);
    cout<<i<<" ";
}

void fun(int num){
    fun1(1,num);
    return;
}
int main(){
   fun(19);
   return 0;
}