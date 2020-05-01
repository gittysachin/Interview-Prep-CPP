#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cin >> n;

	int *a = new int [n];
	int largest = INT_MIN;

	for(int i=0; i<n; i++) {
		cin >> a[i]; 
		largest = max(largest, a[i]);
	}
	cout << largest << endl;
	return 0;
}
