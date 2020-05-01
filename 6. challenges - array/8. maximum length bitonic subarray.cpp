#include<iostream>
using namespace std;

#define li long int

li maxLengthBitonicSubarray(li a[], li n){
    li maxlen = 1;
    li start = 0;
    li nextstart = 0;

    li j = 0;
    while(j < n-1) {
        while(j<n-1 && a[j] <= a[j+1])
            j++;
        
        while(j<n-1 && a[j] >= a[j+1]){
            // when we detect the start of the descent 
            if(j<n-1 && a[j] > a[j+1]){
                nextstart = j+1;
            }
            j++;
        }

        maxlen = max(maxlen, j-(start-1));
        start = nextstart;
    }
    return maxlen;
}

int main(){
    int t;
    li n;
	cin >> t;
	while(t--){
		cin >> n;
		li *a = new li [n];
		for(li i=0; i<n; i++){
			cin >> a[i];
		}
		cout << maxLengthBitonicSubarray(a, n) << endl;
	}
    return 0;
}