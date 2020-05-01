#include<iostream>
using namespace std;

void rotate_ac(int a[][1000], int n){
	// take transpose
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		    if(i < j){
		        swap(a[i][j], a[j][i]);    
		    }
		}
	}
    // Reverse each column
	for(int col=0; col<n; col++){
		int startRow = 0;
		int endRow = n-1;
		while(startRow < endRow){
			swap(a[startRow][col], a[endRow][col]);
			startRow++;
			endRow--;
		}
	}
}

int main() {
	int n;
	cin >> n;
	int a[1000][1000];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	rotate_ac(a, n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout <<endl;
	}
	return 0;
}