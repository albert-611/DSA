#include <iostream>
using namespace std;

void binToDec(int n){

    int dec = 0;
    int pow = 1;
    int lastD = 0;

    for ( ; n != 0; n /= 10)
    {
        lastD = n % 10;
        dec += lastD * pow;
        pow = pow * 2;

    }
    
    cout <<dec << endl;
}

int main(){

    binToDec(1010);
    return 0;
}