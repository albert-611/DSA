#include <iostream>
#include <algorithm>
using namespace std;

void ascending(int *arr, int n){


sort(arr + 2, arr + 6);

cout << "Ascending Order: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void descending(int *arr, int n){

   sort(arr, arr + n, greater <int>());
    cout << "Descending Order: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
} 


int main(){

    int n;
    int arr[] = {1, 4, 9, 3, 2, 4, 3, 7};
    n = sizeof(arr) / sizeof(int);

    ascending(arr,n);
    descending(arr, n);

    return 0;
}