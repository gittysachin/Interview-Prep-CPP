#include<iostream>
#include<cstring>
using namespace std;

//   ccoooding   ->   coding

void removeDuplicates(char a[]) {

    int l = strlen(a);
    if(l==0 or l == 1) {
        return;
    }
    int prev = 0;
    for(int current = 1; current < l; current++) {
        if(a[prev] != a[current]) {
            prev++;
            a[prev] = a[current];
        }
    }
    a[prev+1] = '\0';
    return;
}

int main(){
    char a[1000];

    cin.getline(a, 1000);

    removeDuplicates(a);

    cout << a << endl;

    return 0;
}