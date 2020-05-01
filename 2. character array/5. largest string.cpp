#include<iostream>
#include<cstring>
using namespace std;

// Read N, followed by N strings and print the largest strings and it's length

int main() {

    int n;
    cin >> n;
    
    char a[1000];
    char largest[1000];

    int len = 0;
    int largest_len = 0;
    
    cin.get(); // it will take newline ,,,, what happens in the input buffer is aftere input 3 you'll press enter, so it will catch that '\n'
    // if we don't use it here then the program will take 1 less input

    for(int i=0; i<n; i++) {
        cin.getline(a, 1000);
        // cout << a << endl;  
        len = strlen(a);
        if(len > largest_len) {
            largest_len = len;
            strcpy(largest, a);
        }
    }

    cout<<largest<< " and " << largest_len << endl;

    return 0;
}