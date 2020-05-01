#include<iostream>
using namespace std;

#define ll long long int 

int main(){
    // Acheive the same speed of I/O as scanf/printf using cin/cout   
    // this technique used in competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k;
    cin >> k;
    string str;
    cin >> str;
    int freq[2] = {0};
    ll n = str.length();
    ll ans = 0, left = 0;
    for(ll i=0; i<n; i++){
        char temp = str[i];
        freq[temp - 'a']++;
        if(min(freq[0], freq[1]) > k){
            freq[str[left] - 'a']--;
            left++;
        }
        else {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}