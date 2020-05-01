#include<iostream>

using namespace std;

void spiralprint(int a[][1000], int m, int n) {
    int startRow = 0; 
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;

    // Print it
    while(startCol <= endCol && startRow <= endRow) {

        for(int i=startCol; i<=endCol; i++) {
            cout<< a[startRow][i] << " ";
        }
        startRow ++;

        for(int i=startRow; i<=endRow; i++) {
            cout<< a[i][endCol] << " ";
        }
        endCol--;

        if(endRow > startRow) {   // if we don't do this then it will print the middle row twice at last
            for(int i=endCol; i>=startCol; i--) {
                cout << a[endRow][i] << " ";
            }
            endRow--;
        }

        if(endCol > startCol) {   // if we don't do this then it will print the middle column twice at last
            for(int i=endRow; i>=startCol; i--) {
                cout << a[i][startCol] << " ";
            }
            startCol++;
        }
    }
}

int main() {
    int a[1000][1000] = {0};
    int m, n;

    cin >> m >> n;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    spiralprint(a, m, n);

    return 0;
}