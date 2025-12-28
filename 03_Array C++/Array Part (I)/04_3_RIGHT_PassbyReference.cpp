#include <iostream>
using namespace std;

void printArr(int nums[], int n){

    cout << "Length of Array = "<< n <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] <<",";
    }
    
    cout <<endl;
}

int main(){

    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(int);

    cout << "Array Size =" <<sizeof(arr)<<endl;
    cout << "Length of Array =" << n <<endl<<endl;

    printArr(arr,n);
    
    return 0;
}

// this code has return correct values because we pass (arr,n) we passed the size/length of the arr. that's why our code is correct
