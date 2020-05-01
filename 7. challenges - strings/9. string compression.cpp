#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == s[i+1]){
            count ++;
        }
        else {
            cout << s[i];
            cout << count;
            count = 1;
        }
    }
    cout << s[s.size()-1] << count;
    return 0;
}