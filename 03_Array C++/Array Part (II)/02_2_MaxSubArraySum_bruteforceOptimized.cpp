#include<iostream>
using namespace std;

// void SubArraysSum(int *arr, int n){

//     int maxSum = INT8_MIN;
//     for (int st = 0; st < n; st++)
//     {
//         for (int end = st; end < n; end++)
//         {
//             int currentSum = 0;
//             for (int i = st; i <= end; i++)
//             {
//                 currentSum += arr[i];
//             }

            
//             cout << currentSum ;
//             cout << ", ";
//             maxSum = max(maxSum, currentSum); 
            
//         }
        
//         cout << endl;
//     }

//     cout <<"Max SubArray Sum = "<< maxSum <<endl;
    
// }

void SubArraysSum2(int *arr, int n){

    int maxSum = INT8_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = st; end < n ; end++)
        {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout <<"Max SubArray Sum = " << maxSum << endl;
    
}


int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    SubArraysSum2(arr, n);

    return 0;
}