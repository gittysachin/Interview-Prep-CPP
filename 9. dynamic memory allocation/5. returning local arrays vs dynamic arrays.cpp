// local arrays

#include<iostream>
using namespace std;

int* fun(){
    int a[] = {1, 2, 3, 4, 5};
    cout << a << endl;
    cout << a[0] << endl;

    // We should never return a local variable
    // It will give us warning but will execute the program 
    // because as soon as the function completes this stack frame is cleared from memory
    return a;
}

int* funnn(){
    int *a = new int[5];
    a[0] = 11;
    a[1] = 2;
    a[2] = 3;

    cout << a << endl;
    cout << a[0] << endl;

    return a;
}

int main(){
    int *b = fun();
    cout << b << endl;  // So actually we'll get some garbage value here
    cout << b[0] << endl;

    int *c = funnn();
    cout << c << endl;      // 11
    cout << c[0] << endl;   // 11

    delete [] b;
    delete [] c;

    return 0;
}