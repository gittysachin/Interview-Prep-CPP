#include<iostream>
using namespace std;

bool compare(int a, int b){
    cout << "Comparing " << a << " and " << b << endl;
    return a > b;
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)){
    // N-1 large elements to the end
    for(int i=1; i<=n-1; i++){
        // Pairwise swapping in the unsorted array
        for(int j=0; j<=(n-i-1); j++){
            if(cmp(a[j], a[j+1])){
                swap(a[j], a[j+1]);   // Increasing order 
            }
        }
    }
}

int main(){
    int n, key;
    cin >> n;

    int a[1000];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    bubble_sort(a, n, compare);

    for(int i=0; i<n; i++){
        cout << a[i] << ", ";
    }

    return 0;
}