#include<iostream>
using namespace std;

void printArr(int *arr, int n){

    int i;
    for ( i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}
void changeArr(int *arr, int n, int i){

    if (i == n)
    {
        printArr(arr,n);
        return;
    }
    
    arr[i] = i+1;
    changeArr(arr,n,i+1);

    arr[i] -= 2; //backtrack
    /*
    In short: Backtracking happens because the arr[i] -= 2 line is placed after the recursive call. 
    If you moved that line above the recursive call, 
    the subtraction would happen during the forward phase instead of the backtracking phase.
    */
}
int main()
{
    int arr[5] = {0};
    int n = 5;

    changeArr(arr, n, 0);
    printArr(arr,n);

    return 0;
}