#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int si, int ei){

    int i = si - 1;
    int pivot = arr[ei];
    for (int j = si; j < ei ; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]) ; //arr[j] = (arr[j] + arr[i]) - (arr[i] = arr[j]);
            
        }       
    }

    i++;
    swap(arr[i], arr[ei]); // arr[ei] = (arr[ei] + arr[i]) - (arr[i] = arr[ei]);
    return i;
}

void quickSort(vector<int> &arr, int si, int ei){

    if(si >= ei) return ;

    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx - 1);
    quickSort(arr,pivotIdx + 1, ei);
}

int main(){

    vector<int> arr= { 6, 3, 7, 5, 2, 4};
    quickSort(arr, 0, arr.size()-1);

    for (int x : arr){
        cout << x << " ";
    }
    
    return 0;
}