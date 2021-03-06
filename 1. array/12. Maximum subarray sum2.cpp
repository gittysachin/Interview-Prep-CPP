#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[1000];
    int cumSum[1000] = {0};

    int maximumSum = 0;
    int currentSum = 0;
    int left = -1;
    int right = -1;

    cin>> a[0];
    cumSum[0] = a[0];
    for(int i=1; i< n; i++) {
        cin>> a[i];
        cumSum[i] = cumSum[i-1] + a[i];
    }

    // Generate all subarrays
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(i-1 > 0) {
                currentSum = cumSum[j] - cumSum[i-1];
            }
            else {
                currentSum = cumSum[j];
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