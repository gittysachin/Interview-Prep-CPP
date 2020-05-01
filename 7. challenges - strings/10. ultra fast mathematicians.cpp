#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char a[100];
        char b[100];

        cin >> a;
        cin >> b;

        for(int i=0; a[i]!='\0'; i++){
            if(a[i] == b[i])
                cout << "0";
            else 
                cout << "1";
        }
        cout << endl;
         
    }

    return 0;
}