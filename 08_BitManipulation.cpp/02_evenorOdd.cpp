#include<iostream>
using namespace std;

void oddorEven(int a){

    if (!(a & 1))
    {
        cout << a << " is an Even Number"<< endl;
    }

    else{
        cout << a << " is an Odd Number"<< endl;
    }
    
}
int main(){

    oddorEven(15);
    oddorEven(8);

    return 0;
}
