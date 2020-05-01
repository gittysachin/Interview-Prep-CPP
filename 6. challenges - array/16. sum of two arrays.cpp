#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m, n;
    cin >> m;
    int A[m];
    for(int i=0; i<m; i++){
        cin >> A[i];
    }
    cin >> n;
    int B[n];
    for(int i=0; i<n; i++){
        cin >> B[i];
    }

    vector<int> ans;
    int i, j, carry=0;
    for(i=m-1, j=n-1; i>=0 && j>=0; i--, j--){
        int sum = A[i] + B[j] + carry;
        ans.push_back(sum%10);
        carry = sum/10;
    }
    while(i>=0){
        int sum = A[i] + carry;
        ans.push_back(sum%10);
        carry = sum/10;
		i--;
    }
    while(j>=0){
        int sum = B[j] + carry;
        ans.push_back(sum%10);
        carry = sum/10;
		j--;
	}
    if(carry){
        ans.push_back(carry);
    }

    for(int i=ans.size()-1; i>=0; i--){
        cout<<ans[i]<<", ";
    }
    cout<<"END";

    return 0;
}