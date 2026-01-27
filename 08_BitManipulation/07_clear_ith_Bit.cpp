#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int i = 2;
    int mask = ~(1 << i);

    cout << (n & mask) <<  endl;

    return 0;
}