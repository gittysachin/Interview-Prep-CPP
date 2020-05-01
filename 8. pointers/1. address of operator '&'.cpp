#include<iostream>
using namespace std;

int main(){
    int x = 10;
    cout << &x << endl;

    float y = 10.5;
    cout << &y << endl;

    // It does not work for character variables because of operator overloading
    char ch = 'A';
    cout << &ch << endl;  // A
    cout << (void *)&ch << endl;

    int *xptr;
    xptr = &x;

    cout << &x << endl;
    cout << xptr << endl;

    return 0;
}