#include<iostream>

using namespace std;

int main(){
    char a[][10] = {{'a', 'b', '\0'}, {'d', 'e', 'f', '\0'}};

    cout << a[0] << endl; // ab
    cout << a[1] << endl; // def

    char b[][10] = {"ab", "def", "ghi", "hello"};

    cout << b[2] << endl; // ghi
    cout << b[3] << endl; // hello


    return 0;
}