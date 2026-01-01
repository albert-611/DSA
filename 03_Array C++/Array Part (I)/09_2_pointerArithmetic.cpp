//Addition and Subtraction of Constants

#include <iostream>
using namespace std;
void arrptr(int *ptr, int n){
 
    for ( int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << ",";
    }
    cout << endl;
}


int main(){

    int a = 10;
    int *aptr = &a;

    cout << aptr << endl;   
    aptr = aptr + 3;
    cout << aptr << endl;   
    cout << aptr - 3 << endl;


    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(int);
    arrptr(arr, n);

    return 0;
}