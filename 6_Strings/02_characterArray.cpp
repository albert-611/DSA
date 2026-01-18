#include<iostream>
using namespace std;

int main(){

    char str[]= "hello";
    cout << str <<endl;
    
    char str1[3] = {'a','b','c'};
    cout << str1 << endl; // wrong way

    char str2[4] = {'a','b','c'};
    cout << str2 << endl; // wrong way

    char str3[5] = {'a','l','b','e','\0'};
    cout << str3 << endl; 

    char str4[] = "CODE"; // (" ") string literals 
    cout << str4 << endl; 

    char str5[] = "CODE\0";
    cout << str5 << endl;// wrong way

    char str6[100] = "Hello World!"; // (" ") string literals 
    cout << str6 << endl;

    return 0;
}