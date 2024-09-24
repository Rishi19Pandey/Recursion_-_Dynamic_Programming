#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string kthPermutation(int n , int k){
        int fact = 1;
        string ans = "";
        vector<int> vec;
        for(int i = 1 ; i < n ; i++){
            fact = fact * i;
            vec.push_back(i);
        }
        vec.push_back(n);
        k = k - 1;
        while(true){
            ans = ans + to_string(vec[k / fact]);
            vec.erase(vec.begin()+k/fact);
            if(vec.size()==0){
                break;
            }
             k = k % fact;
             fact = fact / vec.size();
        }
        return ans;
}

int main(){
   int n = 4 , k = 17;
   cout<<"Answer is => "<<kthPermutation(n , k);
   return 0;
}