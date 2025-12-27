#include<iostream>
using namespace std;

void changeA(int &a){

    a = 20;
    cout << a << endl;
}



int main(){

//     int a = 5;
//     int &b = a;

//     b = 25;
//     cout << b <<endl; // 25
//     cout << a <<endl; // 25

    int a = 10;

    changeA(a);
    cout << a << endl;

    return 0;

}