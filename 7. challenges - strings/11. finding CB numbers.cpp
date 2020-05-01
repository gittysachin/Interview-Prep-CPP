#include<iostream>

using namespace std;

bool isValid(bool visited[17], string str, int start, int end){
    for(int i=start; i<end; i++){
        if(visited[i]){
            return false;
        }
    }
    return true;
}

bool isCB(long long sub){
    if(sub == 0 || sub == 1) {
        return false;
    }
    int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for(int i=0; i<10; i++){
        if(sub == prime[i]){
            return true;
        }
    }
    for(int i=0; i<10; i++){
        if(sub % prime[i] == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n, count = 0;
    cin >> n;
    string str;
    cin >> str;

    bool visited[str.length()];
    for(int i=0; i<str.length(); i++){
        visited[i] = false;
    }

    for(int len=1; len<=str.length(); len++){
        for(int start=0; start<=str.length()-len; start++){
            int end = start + len;
            string sub = str.substr(start, len);

            if(isCB(stoll(sub)) && isValid(visited, sub, start, end)){
                count++;

                for(int i=start; i<end; i++){
                    visited[i] = true;
                }
            }
        }
    }

    cout << count;

    return 0;
}