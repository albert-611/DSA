#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    float pi = 3.1416;
    float *ptr2 = &pi;

    //printng address of specific variables
    cout << &a << "= " <<ptr<<endl;
    cout << &pi << "= " <<ptr2<<endl;

    //sizeof pointer
    cout <<sizeof(ptr)<<endl;
    cout <<sizeof(ptr2)<<endl;

    //address of any pointer
    int b = 22;
    int *ptr1 = &b;
    int **pptr = &ptr1;

    cout << &b <<endl;
    cout << ptr1 <<endl;
    cout<< &ptr1 <<" = "<< pptr <<endl;

    return 0;
}