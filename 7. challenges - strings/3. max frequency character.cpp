#include<iostream>
#include<cstring>

#define ASCII_SIZE 256
using namespace std;

int main(){
    char str[10000];
    cin >> str;
    int count[ASCII_SIZE] = {0};

    int len = strlen(str);
    int max = 0;
    char result;

    for(int i=0; i<len; i++){
        count[str[i]]++;
        if(max < count[str[i]]){
            max = count[str[i]];
            result = str[i];
        }
    }
    cout << result;

    return 0;
}

// The above code won't work beciase there are total 256 characters in ASCII

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str[1000];
//     cin >> str;
    
//     int freq[26] = {0};
//     int FREQ[26] = {0};

//     for(int i=0; i<strlen(str); i++){
//         if(str[i]>=97 && str[i]<=122){
//             freq[str[i]-'a']++;
//         }
//         else{
//             FREQ[str[i]-'A']++;
//         }
//     }
//     int max=0;
//     for(int i=0; i<26; i++){
//         if(max < freq[i]){
//             max = i;
//         }
//     }
//     int flag = -1;
//     for(int i=0; i<26; i++){
//         if(max < FREQ[i]){
//             max = i;
//             flag = 1;
//         }
//     }

//     if(flag == -1){
//         cout << (char)(max + 97);
//     }
//     else if(flag == 1){
//         cout << (char)(max + 65);
//     }

//     return 0;
// }