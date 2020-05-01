#include<iostream>

using namespace std;

void selection_sort(int a[], int n) {
    for(int i=0; i<n-1; i++) {    // when you have one element left, it's already sorted
        // find out the smallest element idx in the unsorted part
        int min_index = i;
        for(int j=i; j<=i-1; j++) {
            if(a[j] < a[min_index]) {
                min_index = j;
            }
        }

        swap(a[i], a[min_index]);
    }
}

int main() {
    int n, key, i;
    cin >> n;

    int a[1000];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    selection_sort(a, n);  // here we're passing the pointer,, `a` points to the first element of the array so we are getting the updated array

    for(i=0; i<n ;i++) {
        cout<< a[i]<<", ";
    }
    return 0;
}