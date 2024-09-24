#include <bits/stdc++.h>
using namespace std;

int memoFib(int num , vector<int> &Arr){
    if(Arr[num] != -1){
        return Arr[num];
    }
    Arr[num] = memoFib(num - 1,Arr) + memoFib(num - 2,Arr);
    return Arr[num];
}

int fib(int num){
    if(num == 0 || num == 1){
        return num;
    }
    vector<int> Arr(num+1);
    Arr[0] = 0;
    Arr[1] = 1;
    for(int i = 2 ; i < num+1 ; i++){
        Arr[i] = -1;
    }
    return memoFib(num,Arr);
}

int main()
{
    int num = 19;
    cout<<fib(num)<<endl;
    return 0;
}



//  0 1 2 3 4 5 6  7   8    9
//  0 1 1 2 3 5 8  13  21   34