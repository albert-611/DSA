#include <iostream>
using namespace std;

int main(){

    int arr1[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {1.1, 2.2, 3.3, 4.4};
    
    cout << sizeof(arr1) / sizeof(int) <<endl;
    cout << sizeof(arr2) / sizeof(float)<<endl;

    return 0;
}