#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    return a > b;
}

bool mycmp(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba)>0;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // string a[100];
        // for(int i=0; i<n; i++){
        //     cin >> a[i];
        // }
        // sort(a, a+n, compare);
        // long long int ans = stoi(a[0]); // string to integer
        // for(int i=1; i<n; i++){
        //     int len = a[i].size();
        //     int multiplier = pow(10, len);
        //     ans *= multiplier;
        //     ans += stoi(a[i]);
        // }
        // cout << ans << endl;
        
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        sort(s,s+n,mycmp); // lexically sort
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        cout << endl;
    }
    return 0;
}