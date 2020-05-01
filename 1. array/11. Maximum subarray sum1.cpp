#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[1000];
    int maximumSum = 0;
    int currentSum = 0;
    int left = -1;
    int right = -1;

    for(int i=0; i< n; i++) {
        cin>> a[i];
    }

    // Generate all subarrays
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            currentSum = 0;
            for(int k=i; k<=j; k++) {
                currentSum += a[k];
            }
            if(currentSum > maximumSum) {
                maximumSum = currentSum;
                left = i;
                right = j;
            }
        }
    }

    // Print the maximum
    cout << " the maximum sum is :" << maximumSum << endl;

    // print the subarray 
    for(int k=left; k<=right; k++) {
        cout<< a[k]<<",";
    }
    cout<<endl;
}