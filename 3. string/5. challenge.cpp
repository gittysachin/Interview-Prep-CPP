// input  

// 3
// 92 022 
// 82 12
// 77 13
// 2 false numeric 

// output 

// 82 12
// 77 13
// 92 022


#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string extractStringAtKey(string str, int key) {
    // strtok
    char *s = strtok((char *)str.c_str(), " ");
    while(key > 1) {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

int convertToInt(string str){
    int ans = 0;
    int pow = 1;

    for(int i=str.length()-1; i>=0; i++) {
        ans += ((str[i]-'0')*pow);
        pow *= 10;
    }
    return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2) {
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2) {
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}

int main() {

    int n;
    cin>> n;
    cin.get();

    string a[100];
    for(int i=0; i< n; i++) {
        getline(cin, a[i]);
    }

    int key;
    string reversal, ordering;
    cin>> key>>reversal>>ordering;

    pair<string, string> strPair[100];

    for(int i=0; i < n; i++) {
        strPair[i].first = a[i];
        strPair[i].second = extractStringAtKey(a[i], key);
    }

    // Next = sorting 
    if(ordering == "numeric") {
        sort(strPair, strPair + n, numericCompare);
    }
    else {
        sort(strPair, strPair + n, lexicoCompare);
    }

    if(reversal == "true") {
        for(int i=0; i< n/2; i++) {
            swap(strPair[i], strPair[n-i-1]);
        }
    }

    // output 
    for(int i=0; i<n; i++) {
        cout<<strPair[i].first<<" ";
    }

    return 0;
}