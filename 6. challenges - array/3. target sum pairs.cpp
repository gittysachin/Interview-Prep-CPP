#include<iostream>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
	return a.first < b.first;
}

void target_sumpair(int *a, int n, int target){
	pair<int, int> targetpair[100];
	int count = 0;
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++){
			if(a[i] + a[j] == target){
				if(a[i] > a[j]){
					targetpair[count].first = a[j];
					targetpair[count].second = a[i];	
				}
				else{
					targetpair[count].first = a[i];
					targetpair[count].second = a[j];
				}
				count ++;
			}
		}
	}

	// sort(targetpair, targetpair + count, compare);

	for(int i=0; i<count; i++){
		cout<< targetpair[i].first << " and " << targetpair[i].second << endl;
	}
}

// void target_sumpair(int *a, int n, int target){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(a[i]+a[j] == target && a[i]<=a[j]){
//                 cout << a[i] << " and " << a[j] << endl;
//             }
//         }
//     }
// }

int main() {
	int n;
	cin >> n;
	int *arr = new int [n];

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);  // important

	int target;
	cin >> target;

	target_sumpair(arr, n, target);

	return 0;
}