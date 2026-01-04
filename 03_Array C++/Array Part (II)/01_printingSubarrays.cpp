#include <iostream>
using namespace std;

void printSubIndx(int *arr, int n){

    cout <<"Printing Subarrays stating and Ending Indexes: "<<endl;
    // (starting index , ending index)
for (int start = 0; start < n; start++)
{
    for (int end = start; end < n; end++)
    {
        cout << "(" << start << ","<< end << ")  "; // this are the starting index and ending index
    }
    
    cout << endl;
}

}


void printSubarray(int *arr, int n){

    cout <<"Printing Subarrays: " << endl;
    for (int start = 0; start < n; start++)
{
    for (int end = start; end < n; end++)
    {
        //cout << "(" << start << ","<< end << ")  -> "; // this line is optional, its for better understand
        for (int i = start; i <= end; i++)
        {
            cout << arr[i];
        }
        
        cout<<", ";
    }
    
    cout << endl;
}

}


void printSubIndexarray(int *arr, int n){
    cout <<"Printing Subarray Indexes with Subb arrays" << endl;
    //(elements according to the index number)
for (int start = 0; start < n; start++)
{
    for (int end = start; end < n; end++)
    {
        cout << "(" << start << ","<< end << ")  -> "; // this line is optional, its for better understand
        for (int i = start; i <= end; i++)
        {
            cout << arr[i];
        }
        
        cout<<", ";
    }
    
    cout << endl;
}

}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printSubIndx(arr, n);
    printSubarray(arr, n);
    printSubIndexarray(arr,n);


    return 0;
}

// time complexity is O(n^3);