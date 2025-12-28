#include <iostream>
using namespace std;

void funct1(int arr[]){ //way one

    arr[0] = 1000;
}

void funct2(int *ptr){ //way two

    ptr[0] = 1000;
}

int main(){

    int arr[] = {1,2,3,4,5};

    funct1(arr);
    cout << arr<< " = " << arr[0] << endl;

    funct2(arr);
    cout << arr<< " = " << arr[0] << endl;

    //both function returns same values and same memory space
    return 0;
}