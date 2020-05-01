#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *arr = new int [n];

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	sort(arr, arr+n);

	int target;
	cin >> target;

	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			for(int k=j+1; k<n; k++)
				if(arr[i]+arr[j]+arr[k] == target)
					cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;

    // int l, r;
	// for(int i=0; i<n-2; i++){
	// 	l=i+1;
	// 	r=n-1;
	// 	while(l<r){
	// 		if(arr[i] + arr[l] + arr[r] == target){
	// 			cout << arr[i] << ", "<<arr[l]<<" and "<<arr[r];
	// 		}
	// 		else if(arr[i] + arr[l] + arr[r] < target){
	// 			l++;
	// 		}
	// 		else {
	// 			r--;
	// 		}
	// 	}
	// }

	return 0;
}