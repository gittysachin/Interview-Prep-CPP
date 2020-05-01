#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[], int n);

int maximumCircularSum(int a[], int n){
	// Case 1: get the max subarray sum using kadane's algo
	int max_kadane = kadane(a, n);
	// Now find the maximum that includes corner elements (circularly connect... think)
	int max_wrap = 0;
	for(int i=0; i<n; i++){
		max_wrap += a[i]; // Calculate sum-array
		a[i] = -a[i]; // Invert the array (change sign)
	}

	// max sum with corner elements will be :
	// arrau_sum - (-max subarray sum of inverted array)
	max_wrap = max_wrap + kadane(a, n);

	return max(max_kadane, max_wrap);
}

// Kadane's algorithm to find maximum subarray sum
// this kadane's algorithm can  be used for both positive and negative numbers
// O(n) time 
int kadane(int a[], int n){
	int max_so_far = INT_MIN, max_ending_here = 0;
	for(int i=0; i<n; i++){
		max_ending_here = max_ending_here + a[i];
		if(max_ending_here < 0){
			max_ending_here = 0;
		}
		if(max_so_far < max_ending_here){
			max_so_far = max_ending_here;
		}
	}
	return max_so_far;
}

int main() {
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int *a = new int [n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << maximumCircularSum(a, n) << endl;
	}
	return 0;
}