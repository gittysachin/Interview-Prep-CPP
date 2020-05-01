#include<iostream>
using namespace std;

void spiral_anticlockwise(int **a, int m, int n){
	int startRow = 0;
	int endRow = m-1;
	int startCol = 0;
	int endCol = n-1;

	while(startCol <= endCol && startRow <= endRow){
		if(endCol > startCol){
			for(int i=startRow; i<=endRow; i++){
				cout << a[i][startCol] << ", ";
			}
			startCol++;
		}
		if(endRow > startRow){
			for(int i=startCol; i<=endCol; i++){
				cout << a[endRow][i]<< ", ";
			}
			endRow--;
		}

		for(int i=endRow; i>=startRow; i--){
			cout << a[i][endCol] << ", ";
		}
		endCol--;
		
		for(int i=endCol; i>=startCol; i--){
			cout << a[startRow][i] << ", ";
		}
		startRow++;
	}
	cout << "END";
}

int main(){
	int m, n;
	cin >> m>>n;
	int **a = new int *[n];
	for(int i=0; i<n; i++){
		a[i] = new int [m];
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	spiral_anticlockwise(a, m, n);
	return 0;
}