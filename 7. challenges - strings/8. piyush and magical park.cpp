#include<iostream>

using namespace std;

int main(){
    int n,m,k,s;
    cin >> n >> m >> k >> s;
    char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j]; 
        }
    }
    int flag =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s>k){
                flag = 1;
                break;
            }
            if(a[i][j] == '#'){
                break;
            }
            
            if(a[i][j] == '.'){
                s -= 2;
            }
            if(a[i][j] == '*'){
                s += 5;
            }
            if(j != n-1)
                s--;
        }
        if(flag){
            break;
        }
    }

    if(flag == 0) {
        cout << "Yes"<< endl << s;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}