#include<iostream>
using namespace std;

int main() {
    // int a[10] = {1, 2, 3};

    // if we don't initilizze then it will have garbage values. 

    int a[10] = {0};
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < 10; i++) {
        cout << a[i] << ", ";
    }
    return 0;
}