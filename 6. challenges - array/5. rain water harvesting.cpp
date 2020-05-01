#include<iostream>

using namespace std;

int maxWater(int arr[], int n){  // O(1) time complexity optimized solution
	int left[n];
	int right[n];
	int water = 0;

	left[0] = arr[0];

	for(int i=1; i<n; i++)
		left[i] = max(left[i-1], arr[i]);
	
	right[n-1] = arr[n-1];

	for(int i=n-2; i>=0; i--)
		right[i] = max(right[i+1], arr[i]);

	for(int i=0; i<n; i++){
		water += min(left[i], right[i]) - arr[i];
	}

	return water;
}

// int maxWater(int arr[], int n){ // O(n2) solution
// 	int res = 0;

// 	for(int i=1; i<n-1; i++){
// 		int left = arr[i];
// 		// find the maximum element on its left
// 		for(int j=0; j<i; j++){
// 			left = max(left, arr[j]);
// 		}

// 		int right = arr[i];
// 		// find the maximum element on its right
// 		for(int j=i+1; j<n; j++){
// 			right = max(right, arr[j]);
// 		}

// 		res = res + (min(left, right) - arr[i]);
// 	}

// 	return res;
// }

int maxWater(int arr[], int n){

}

int main() {
	int n;
	cin >> n;

	int *arr = new int [n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	cout << maxWater(arr, n);

	return 0;
}