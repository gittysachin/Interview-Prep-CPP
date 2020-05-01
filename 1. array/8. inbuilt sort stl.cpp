#include<iostream>
#include<algorithm>

using namespace std;

// Define A Comparator function 
bool compare(int a, int b) { 
    return b > a; // to sort in increasing order

    // return a > b; // to sort in decreasing order
}

int main() {
    int n, key;
    cin >> n;

    int a[1000];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // sort an array using sort() function, more efficient
    sort(a, a+n, compare);   // here we're sending function as a paramenter to another function, we're not calling compare fxn

    // sort(a, a+n, greater<int>());  // sort in decreasing order

    for(int i = 0; i < n; i++) {
        cout << a[i] << ", ";
    }

    return 0;
}