#include<iostream>
using namespace std;

int sumofN(int n){

    if (n == 1)
    {
        return 1;
    }
    return n + sumofN(n-1);
    
}
int main(){

    int result = sumofN(5);
    cout << result << endl;
    return 0;
}