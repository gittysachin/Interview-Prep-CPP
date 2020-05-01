#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> arr;
		for(int i=0; i<n; i++){
			int a;
			cin >> a;
			arr.push_back(a);
		}
		next_permutation(arr.begin(), arr.end());
		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}