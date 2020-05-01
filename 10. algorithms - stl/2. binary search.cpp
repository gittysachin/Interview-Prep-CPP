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
    } else {
        cout << "Absent!";
    }

    // Two more things
    // Get the index of that element
    // lower_bound(s,e,key) and upper_bound(s, e, key)

    auto lb = lower_bound(arr, arr+n, 40);          // first element that is >= key
    cout << "Lower bound of 40 : " << (lb - arr) << endl;  // 2

    // if((lb-arr) == n){
    //     cout << "Element is not present" << endl;
    // }    // We don't need to do this

    auto ub = upper_bound(arr, arr+n, 40);          // first element that is > key
    cout << "Upper bound of 40 : " << (ub - arr) << endl;  // 5

    cout << "Occurance frequency of 40 is : " << (ub - lb) << endl;   // 3

    return 0;
}