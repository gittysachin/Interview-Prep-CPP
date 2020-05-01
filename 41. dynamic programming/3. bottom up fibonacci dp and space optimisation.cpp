#include<iostream>
using namespace std;

// Bottom up Approach
int fibBU(int n){
    int dp[100] = {0};
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

// Bottom up approach with space optimization
int fibSpaceOpt(int n){
    if(n==0 or n==1){
        return n;
    }
    int a=0;
    int b=1;
    int c;
    for(int i=2; i<=n; i++){
        c = a + b;
    }
    return c;
}

int main(){
    int n;

    cout << fibBU(n) << endl;

    return 0;
}