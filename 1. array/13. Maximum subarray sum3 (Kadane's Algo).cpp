#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[1000];

    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    
    // Kadane's algorithm requires atleast one positive number in the array
    // But if all the number are -ve then the answer will simply be the least -ve number, that we can easily find. In that case we can modify the code (entirely) a little bit.

    int sum = 0;
    int maxi = INT_MIN;
    
    for(int i=0; i<n; i++) {
        sum = sum + nums[i];
        maxi = max(sum, maxi);
        if(sum < 0) sum = 0;
    }
    
    cout<< "Maximum sum is " << maxi <<endl;

    return 0;

}