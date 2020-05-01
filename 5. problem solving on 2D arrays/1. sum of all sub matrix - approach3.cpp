// Every element will be a part of more than 1 sub matrix

// In each submatrix the element will be contributing for the sum 

// so basically we need to find contribution of each cell/element in final sum 
// = arr[i][j] * no of submatrices the cell will be a part of 

// Then the sum of the contributions of all elements will be our final answer 


// sum += value of cell * [no of submatrices cell is part of] 

// How about instead of calculating all possible sub matrices, we can count contribution of each element that will be done inside whole sum 
// This is how we should think in reverse direction 

#include<iostream>

using namespace std;

// if we choose top left from white area and bottom right from red area then (i, j) will be a part of this 
// x is the number if cell in white area
// y is the number of cell in red area 

// Total submetrices that can be made will be (x * y)

int sumOfSubMatrix(int **arr, int n, int m) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int tl = (i+1)*(j+1); // top left
            int br = (n-i)*(m-j); // bottom right
            sum += (tl * br)*arr[i][j];
        }
    }
    return sum;
}

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;
    int **arr = new int* [n];

    for(int i=0; i<n; i++) {
        arr[i] = new int[m];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << sumOfSubMatrix(arr, n, m) << endl;

    return 0;
}