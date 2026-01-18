#include<iostream>
using namespace std;

int main(){

    char ch = 'Z';
    int pos = ch - 'A'; //subtracting with starting character

    char num = '5';
    int numpos = num - '0';

    char str[6] = "hello";
    cout << pos << endl;
    cout << numpos << endl;

    return 0;
}