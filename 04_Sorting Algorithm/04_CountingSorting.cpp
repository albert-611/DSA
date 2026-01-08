#include<iostream>
#include<climits>
using namespace std;

void countingSorting(int *arr, int n){

    int freq[100000] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal, arr[i]);
    }


    for (int i = minVal, j = 0 ; i <= maxVal; i++)
    {
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }


    for (int i = 0; i < n; i++)
    {
       cout << arr[i]<<" ";
    }
    

    cout<< endl;
    
}


int main(){

    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countingSorting(arr, n);
    return 0;
}