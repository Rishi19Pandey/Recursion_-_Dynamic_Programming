//                          TowerOfHanoi.cpp

#include<bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int num, string S, string A, string D){
    if(num <= 0){
        return;
    }
    TowerOfHanoi(num-1,S,D,A);
    cout<<num<<" Disk Move from "<<S<<" to "<<D<<endl;
    TowerOfHanoi(num-1,A,S,D);
}

int main(){
   int num;
   cout<<"Enter Number of Disks : ";
   cin>>num;
   string S = " Source ",D = " Destination ",A = " Auxiliary ";
   TowerOfHanoi(num,S,A,D);
   return 0;
}