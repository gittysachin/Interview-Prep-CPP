#include<iostream>
using namespace std;

void staircase_search(int **a, int n, int m, int key) {
	int i=0;
	int j=m-1;

	while(i<n && j>=0){
		if(a[i][j] == key){
			cout << "1";
			return ;
		}
		else if(a[i][j] > key){
			j--;
		}
		else {
			i++;
		}
	}
	cout << "0";
}

int main() {
	int n, m;
	cin >> n >> m;
	
	int **a = new int* [m];
	for(int i=0; i<m; i++){
		a[i] = new int [n];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	int key;
	cin >> key;

	staircase_search(a, n, m, key);

	return 0;
}