#include<iostream>
using namespace std;

int main(){
    char ch1;
    cin >> ch1;

    if(isupper(ch1)){
        cout << "U";
    }
    else if(islower(ch1)){
        cout << "L";
    }
    else {
        cout << "I";
    }

    // int ch;
    // ch = int(ch1);

    // if(ch <= 90 && ch >= 65){
    //     cout << "U";
    // }
    // else if(ch <= 122 && ch >= 97){
    //     cout << "L";
    // }
    // else {
    //     cout << "I";
    // }

    return 0;
}