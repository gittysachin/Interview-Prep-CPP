#include<iostream>

using namespace std;

#define R 3
#define C 3

void prefixSum2D(int a[][C]){
    int psa[R][C];
    psa[0][0] = a[0][0];

    // filling the first row and firsrt column
    for(int i=1; i<C; i++) {
        psa[0][i] = psa[0][i-1] + a[0][i];
    }
    for(int i=0; i<R; i++) {
        psa[i][0] = psa[i-1][0] + a[i][0];
    }

    // updating the values in the cells 
    // as per the general formula 
    for(int i=1; i<R; i++) {
        for(int j=1; j<C; j++) {
            // values in the cellls of new array are updated 
            psa[i][j] = psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1] + a[i][j];
        }
    }

    // displaying the values of the new array 
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){

    int a[R][C] = { { 10, 20, 30 }, 
                    { 5, 10, 20 }, 
                    { 2, 4, 6 } };

    prefixSum2D(a);

    return 0;
}

/*
Output 

10 30 60 
15 45 95 
17 51 107
*/