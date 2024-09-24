//                          print_1_to_n.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(int num){
    if(num==0)
        return;
    fun(num-1);
    cout<<num<<" ";
}

int main(){
   fun(10);
   return 0;
}