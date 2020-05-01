#include<iostream>
using namespace std;

// cin.get() reads a single character 
// put  a loop to read characters till you get a new line '\n' 

void readline(char a[], int maxLen, char delim = '\n') {
    int i = 0;
    char ch = cin.get();

    while(ch != delim) {
        a[i] = ch;
        i++;
        if(i==(maxLen - 1)) {
            break;
        }
        ch = cin.get();
    }
    // once out of the loop
    a[i] = '\0';
    return;
}

int main() {
    char a[1000];

    cin >> a;           // hello world this is a sentence

    // as soon as the space comes, cin breaks
    cout << a << endl;  // hello

    readline(a, 1000);
    // readline(a, 1000, '$');     so this will actually stop reading when it will encounter '$' character

    cin.getline(a, 1000, '$');
    cout << a << endl;

    return 0;
}