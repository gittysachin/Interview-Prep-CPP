#include<iostream>
#include<cmath>
using namespace std;

#define ull unsigned long long

int count_dig(int m){
    int count = 0;
    while(m != 0) {
        m = m/10;
        count ++;
    }
    return count;
}

int main() {
    ull n, num=0;
    cin >> n;
    int t = 0, dig = 0;
    dig = count_dig(n);

    int *a = new int [dig];
    for(int i=0; i<dig; i++){
        a[dig-i-1] = n%10;
        n=n/10;
    }
    int i=0;
    if(a[i] == 9){
        i++;
    }
    for( ; i<dig; i++){
        t = a[i];
        if(9-t < t){      // min +ve number
            a[i] = 9-t;
        }
    }
    for(int i=0; i<dig; i++){
        // ull fact = 1;
        // for(int j=0; j<dig; j++){
        //     fact = fact * 10;
        // }
        ull fact = pow(10, i);
        num += a[dig-i-1] * fact;
    }
    cout << num;

    return 0;
}   