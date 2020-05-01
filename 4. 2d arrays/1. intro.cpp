#include<iostream>
using namespace std;

// m * n
// int a[rows][cols]

int main() {
    int a[5][3];

    // int m, n;
    // cin >> m >> n;
    // int **a = new int *[n];
	// for(int i=0; i<n; i++){
	// 	a[i] = new int [m];
	// }
    
    // int a[5][3] = {0};

    // Iterate over the array 
    for(int row = 0; row <= 4; row++) {
        for(int col = 0; col <= 2; col++) {
            cin >> a[row][col];
            cout << a[row][col] << " ";
        }
        cout<< endl;
    }

    int b[1000][1000] = {0};
    int m, n;
    cin >> m >> n;
    int val = 1;
    for (int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] = val;
            val = val + 1;
            cout << b[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}