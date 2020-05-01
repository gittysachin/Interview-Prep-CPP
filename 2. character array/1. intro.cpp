#include<iostream>

using namespace std;

int main(){

    // char a[] = {'a', 'b', 'c'};
    char a[10] = {'a', 'b', 'c', '\0'};

    cout<< a << endl;   // abc

    // in the case of integer array, it gives address of first element but its is showing the character array
    // this is because of the << operator overloading 

    // Input
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    char s2[] = "hello";

    cout << s1 << " " << sizeof(s1) << endl;   // helloabcde 5         5 Bytes size
    // here abcde is garbage value, so must terminate by a null character
    cout << s2 << " " << sizeof(s1) << endl;  // 6 bytes

    char s3[10] = "hello";
    char s4[10];

    cin>> s4;
    cout<< s4;

    return 0;
}