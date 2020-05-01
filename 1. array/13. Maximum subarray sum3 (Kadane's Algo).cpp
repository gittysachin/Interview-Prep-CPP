#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];

    int cs = 0;   // int cs = INT_MIN; for negative numbers
    int ms = 0;   // int ms = INT_MIN; for negative numbers

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // Kadane's Algorithm for maximum subarray sum 
    // Kadane's algorithm her is used  for only non-negative numbers 

    for(int i=0; i<n; i++) {
        cs = cs + a[i];

        if(cs < 0) {
            cs = 0;
        }

        ms = max(cs, ms);
    }
    
    cout<< "Maximum sum is " << ms<<endl;

    return 0;

}