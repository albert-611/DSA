//Comparison (==, <, >, <= , >=)

#include <iostream>
using namespace std;
void arrptr(int *arr, int n){

    cout <<"arrptr Function\n";
int *ptr1 = arr;  
int *ptr2 = ptr1 + 3;

cout << *ptr2 <<"\n"; //0, 1, 2, "3" -> output: 66
cout << *ptr1 <<"\n"; // "0" -> output: 1

cout << ptr2 - ptr1 << endl;  // 3 - 0 = 3
    
}


int main(){

    int a = 5;
 
    int arr[] = {1,2,3,66,5,6,7,8};
    int n = sizeof(arr) / sizeof(int);

    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout <<(ptr2 > ptr1) << endl; //1
    cout <<(ptr2 < ptr1) << endl; // 0
    cout <<(ptr2 >= ptr1) << endl; // 1 
    cout <<(ptr2 <= ptr1) << endl; // 0
    cout <<(ptr2 == ptr1) << endl; // 0

    return 0;
}