#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100];
    cin >> a;

    for(int i=0; i<strlen(a); i++){
        if(i+1 < strlen(a)){
            cout << a[i] << a[i+1] - a[i];
        }
        else {
            cout << a[i];
        }
    }

    return 0;
}