#include<iostream>
using namespace std;

int main(){

    // Allocation + Deallocation = Compiler
    int b[100];
    // int b[100] = {0};
    cout << sizeof(b) << endl;
    cout << b << endl;   // this values comes from the symbol table
    // here b can not be overwritten, because b is a constant (Part of read only memory)

    // Dynamic Allocation (On the fly)
    int n;
    cin >> n;
    int *a = new int [n];
    // itn *a = new int [n]{0};  // initiliaze with all zeroes
    cout << sizeof(a) << endl;
    cout << a << endl;   // Variable that is created inside the static memory  -> overwritten
    // a = new char[30];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // free up space 
    delete [] a;

    return 0;
}