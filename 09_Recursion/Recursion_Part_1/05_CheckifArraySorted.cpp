#include<iostream>
using namespace std;

bool checkArray(int *arr, int n, int i){

    if (i == n - 1)
    {
        return true;
    }
    
    if (arr[i] > arr[i+1])
    {
        return false;
    }

    return checkArray(arr,n,i + 1);
    
}
int main(){

    int n = 5, i = 0;
    int arr[n] = {1, 2, 3, 4, 5};

    if (checkArray(arr, n, i))
    {
        cout << "True the array is Sorted"<< endl;
    }

    else{
        cout << "False the array is not Sorted" << endl;
    }

    return 0;
    
}