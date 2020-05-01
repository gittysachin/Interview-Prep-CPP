#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr)/sizeof(int);
    // Search in a sorted array
    int key;
    cin >> key;

    bool present = binary_search(arr, arr+n, key);

    if(present){
        cout << "Present";
    }
    else {
        cout << "Absent!";
    }

    // get the index of the element
    // lower_bound and upper_bound

    auto lb = lower_bound(arr, arr+n, 40);  // >= key
    cout << (lb - arr) << endl;  // 2

    auto ub = upper_bound(arr, arr+n, 40); // > key
    cout << (ub - arr) << endl;  // 5

    // if((lb-arr)==n){
    //     cout << "Element is not present" << endl;
    // }

    cout << "Occ freq of 40 " << (ub - lb) << endl;

    return 0;
}