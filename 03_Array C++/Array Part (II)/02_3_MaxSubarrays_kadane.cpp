#include<iostream>
#include <climits>

using namespace std;

int SubarrayKad(int *arr, int n){

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }
    
    return maxSum;
}

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    int max =  SubarrayKad(arr,n);

    cout<<"Maximum Value is " << max << endl;


    return 0;
}