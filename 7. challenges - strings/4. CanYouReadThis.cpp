#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for(int i=0; i<s.length(); i++){
        if(i!=0 && s[i] >= 'A' && s[i] <= 'Z'){
            cout << endl;
            goto l;
        }
        l:
        {
            cout << s[i];
        }
    }

    return 0;
}