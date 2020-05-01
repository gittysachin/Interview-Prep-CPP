#include<iostream>
using namespace std;

int square_root(int n, int p){  // p = precision
    int s = 0;
    int e = n;

    int ans  = -1;

    while(s <= e){
        int mid = (s+e) >> 1;   // (s+e)/2
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid < n){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    // Floating part
    // Brute Force 

    float inc = 0.1;
    for(int times = 1; times <= p; times++){
        while(ans*ans <= n){
            ans = ans + inc;
        }
        // overshot the value
        ans = ans - inc;
        inc = inc/10;
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << square_root(n, 3) << endl;

    return 0;
}