#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a < b;  // Increasing order
}

int main(){
    int n, key;
    cin >> n;

    int a[1000];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // Sort an array using sort() function, more efficient
    // sort(a, a+n);
    sort(a, a+n, compare);

    for(int i=0; i<n; i++){
        cout << a[i] << ", ";
    }

    return 0;
}