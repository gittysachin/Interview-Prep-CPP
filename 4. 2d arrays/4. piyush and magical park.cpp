#include<iostream>
using namespace std;

void magical_park(char a[][100], int m, int n, int k, int s) {

    // piyush can get out of the park 
    bool success = true;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            char ch = a[i][j];

            if(s < k){
                success = false;
                break;              // we're just breaking the inner loop 

                // cout << "No" << endl;
                // return;
            }
            if(ch == '*'){
                s += 5;
            }
            else if(ch == '.') {
                s -= 2;
            }
            else {      // incase of encountering '#'
                break;
            }

            // we also loose 1 point when we move right except for the last column 
            if(j != n-1){
                s--;
            }
        }
    }
    if(success) {
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int main(){

    int m, n, k, s;
    cin >> m >> n >> k >> s;

    char park[100][100];

    for(int i=0; i<m; i++) {
        for(int j=0;j<n; j++) {
            cin >> park[i][j];
        }
    }

    magical_park(park, m, n, k, s);

    return 0;

}

// Input 
//
// 4 4 5 20 
// . . * .
// . # . . 
// * * . . 
// . # * *

// Output 

// Yes
// 13