#include<iostream>
using namespace std;

void DecToBin(int n){
    

    int pow = 1;
    int BinNum = 0;
    int lastB = 0;

    for (; n != 0; n /= 2)
    {
        lastB = n%2;
        BinNum += pow * lastB;
        pow = pow * 10;
    }

    cout << BinNum <<endl;    
}

int main(){

    DecToBin(727);

    return 0;
}