#include<iostream>
#include<string>
using namespace std;

int main() {
    
    // String init
    string s0;
    string s1("Hello");

    string s2 = "Hello World!";
    string s3(s2);

    string s4 = s3;

    char a[] = {'a', 'b', 'c', '\0'};

    string s5(a);  // abc

    if(s0.empty()) {
        cout<< "s0 is an empty string";
    }
    
    // Append
    s0.append("I love c++");
    s0 += " and python"; 

    // Remove 
    cout<<s0.length()<<endl;   //  22
    s0.clear();
    cout<<s0.length()<<endl;   //  0

    // Compare two strings
    s0 = "Apple";
    s1 = "Mango";
    cout<<s1.compare(s0)<<endl;   //  0
    // it is an lexiographical comparision
    // returns an integer, >0, <0, ==0

    // Overloaded Operator operators 
    if(s1 > s0) {
        cout<< "Mango is lexi grater than Apple"<<endl;
    }

    cout<< s1[2]<<endl;  // n

    // Find substrings 
    string s = "I want to have apple juice";
    int idx = s.find("apple");
    cout<<idx<<endl;

    // Remove a word from the string 
    string word = "apple";
    int len = word.length();
    s.erase(idx, len+1);

    // Iterate over all the characters in the string
    for(int i=0; i< s1.length(); i++) {
        cout<< s1[i] << ":";
    }

    cout<<endl;

    // Iterators 
    for(auto it = s1.begin(); it != s1.end(); it++) {   // string::iterator it
        cout<< (*it) << ",";
    }

    // For each loop  --> new feature in C++11 
    for(auto c:s1) {    // char c:s1
        cout << c << ".";
    }
}