#include<iostream>

using namespace std;

bool isPalindrome(int a[], int n){
    // int n=sizeof(a)/sizeof(a[0]);
    for(int i=0, j=n-1; i<=j; i++, j--){
        if(a[i] != a[j]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
	cin >> n;
	int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(isPalindrome(a, n)){
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}