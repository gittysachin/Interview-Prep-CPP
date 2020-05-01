// binary search is an effecient way to search in sorted array 

// we use divide and conquer technicque in this search 

#include<iostream>
using namespace std;

int binary_search(int a[], int n, int key) {
    int s= 0;
    int e = n - 1;

    while(s <= e) {
        int mid = (s+e)/2;

        if(a[mid] == key) {
            return mid;
        }
        else if (a[mid] > key) {
            e = mid -1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, key, i;
    cin >> n;

    int a[1000];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    cout<< "Enter the element you want to search : ";
    cin >> key;

    cout<< binary_search(a, n, key);
    // it will print the index where the key is present
    // if the index is -1 then the element is not present

    return 0;
}