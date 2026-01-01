// Reverse an Array without an extra space

#include<iostream>
using namespace std;

void finalArr(int *arr, int n){

    for (int i = 0; i < n; i++)
    {
       cout <<arr[i] <<",";
    }
    
    cout <<endl;

}


int main(){

    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof (int);

    int st = 0, end = n - 1;

    while (st < end)
    {
        // int temp = arr[st];
        // arr[st] = arr[end];
        // arr[end] = temp;
        swap(arr[st], arr[end]); // built in function

        st ++;
        end --;
    }
    

    finalArr(arr,n);
 
    return 0;
}
