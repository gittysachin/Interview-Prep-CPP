#include <iostream>
using namespace std;

#define lli long long int

#define MAX 2000

lli multiply(lli *res, lli x, lli res_size){   
	lli carry=0,i,prod;
    for(i=0;i<res_size;i++){
		prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}
	while(carry){
		res[res_size]=carry%10;
		carry=carry/10;
		res_size++;
	}
	return res_size;
}
int main() {
    lli n, res[MAX], res_size=1,x,i;
    res[0]=1;
    cin>>n;
    if(n==1)
        cout<<"1";
    else
    {
		for (x=2;x<=n;x++) 
			res_size=multiply( res, x,res_size);  
		for (i=res_size-1;i>=0;i--) 
			cout<<res[i]; 
    }
    return 0;
}
