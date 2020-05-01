// top down approach (recursion + memoization)

// bottom up approach (small sub problem -----> bigger sub problem)

// We can use DP for overlapping sub problems and optimal sub structure

// ````````````````````````````````````````````````````````````````````````````

#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans;
    ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << fib(n) << endl;
    return 0;
}