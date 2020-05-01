#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compare(string a, string b) {
    if(a.length() == b.length()) {
        return a<b;
    }
    return a.length() > b.length();
}

int main() {
    int n;
    cin >> n;
    
    cin.get();

    string s[100];  // Vector

    for(int i=0; i<n; i++) {
        getline(cin, s[i]);
    }
    
    sort(s, s+n, compare);

    for(int i=0; i<n; i++) {
        cout << s[i] << endl;
    }

    return 0;
}

/* input 

   3 
   apple juice
   mango juice
   banana shake  */

/* output 

   banana shake 
   apple juice
   mango juice   */