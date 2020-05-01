#include<iostream>
using namespace std;

int main(){

    pair<int, char> p;
    p.first = 10;
    p.second = 'N';

    // Another way 
    pair<int, char> p2(p);

    cout << p2.first << endl;
    cout << p2.second << endl;    // p2 is same as p

    pair<int, string> p3 = make_pair(11, "BMW");
    cout << p3.first << " " << p3.second << endl;


    // Take input 
    int a, b;
    cin >> a >> b;

    pair<int, int> p4 = make_pair(a, b);

    // Array of pairs
    // Vector of pairs

    pair<pair<int, string>, string> car;
    car.second = "BMW";
    car.first.first = 10;
    car.first.second = "Hyderabad";
    
    return 0;
}