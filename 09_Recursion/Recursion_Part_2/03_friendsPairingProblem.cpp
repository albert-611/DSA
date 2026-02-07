#include<iostream>
using namespace std;

int friedsPairingProblem(int n){

    if (n == 1 || n == 2)
    {
        return n;
    }
    
    return friedsPairingProblem(n-1) + (n-1) * friedsPairingProblem(n - 2); 
}
int main(){

    cout << friedsPairingProblem(3) << endl;
    return 0;

}