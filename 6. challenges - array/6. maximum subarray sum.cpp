#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    long long m, n;
    cin >> m;
    while(m--){
        cin >> n;
        long long cursum = 0;
        long long arr[100000];
        long long maxsum = 0;

        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            cursum = cursum + arr[i];
            if(cursum < 0) {
                cursum = 0;
            }
            maxsum = max(cursum, maxsum);
        }
        cout << maxsum << endl;
    }

    return 0;
}