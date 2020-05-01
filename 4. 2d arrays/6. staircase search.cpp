#include<iostream>

using namespace std;

// search in a Row and Col wise Sorted array 

void staircase_search(int a[][10], int m, int n, int key) {
    int i=0;
    int j=n-1;

    while(i<m && j>=0) {
        if(a[i][j] == key) {
            cout << "No. found at row = "<< i+1 << ", column = "<< j+1 << endl;
            return;
        }
        else if(key < a[i][j]) {
            j--;
        }
        else {
            i++;
        }
    }

    cout << "No. not found in 2D array" << endl;
}

int main() {
    int m, n, key;
    cin >> m >> n;

    int a[10][10];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    cin >> key;
    
    staircase_search(a, m, n, key);

    return 0;
}