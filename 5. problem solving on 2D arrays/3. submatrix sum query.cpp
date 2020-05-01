// form of query(tli, tlj, bri, brj)

#include<iostream>
using namespace std;

#define M 4
#define N 5

// Function to preprocess input mat[M][N].
// This function mainly fills aux[M][n] such that aux[i][j] stores sum of 
// elements from (0, 0) to (i, j)

void preProcess(int mat[M][N], int aux[M][N]) {
    // copy first row of mat[][] to aux[][]
    for(int i=0; i<N; i++)
        aux[0][i] = mat[0][i];
    
    // Column wise sum 
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++) 
            aux[i][j] = mat[i][j] + aux[i-1][j];
    
    // Row wise sum 
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++) 
            aux[i][j] += aux[i][j-1];
    }
}

int sumQuery(int aux[M][N], int tli, int tlj, int rbi, int rbj) {
    // result now is sum of elements between (0, 0) and (rbi, rbj)
    int res = aux[rbi][rbj];

    // Remove elements between (0, 0) and (tli-1, rbj) 
    if(tli > 0) 
    res = res - aux[tli-1][rbj];

    // Remove elements between (0, 0) and (rbi, tlj-1)
    if(tlj > 0) 
    res = res - aux[rbi][tlj-1];

    // Add aux[tli-1][tlj-1] as elements between (0, 0)
    // and (tli-1, tlj-1) are subtracted twice
    if(tli > 0 && tlj > 0) 
    res += aux[tli-1][tlj-1];

    return res;
}

int main() {
    int mat[M][N] = {{1, 2, 3, 4, 6}, 
				 	 {5, 3, 8, 1, 2}, 
				 	 {4, 6, 7, 5, 5}, 
				 	 {2, 4, 8, 9, 4} }; 
    int aux[M][N];
    // aux matrix is the matrix in which we are precomputing the prefix sums of the matrix elements 
    // so that we can answer the query in O(1) time 

    preProcess(mat, aux);

    int tli=2, tlj=2, rbi=3, rbj=4;
    cout << "\nQuery1: " << sumQuery(aux, tli, tlj, rbi, rbj);

    return 0;

}