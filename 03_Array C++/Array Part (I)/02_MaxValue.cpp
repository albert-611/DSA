#include <iostream>
using namespace std;

int main(){

    int arr[] = {5,4,9,12,33,3,45,12,55};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout <<"Assigning value " << arr[i] <<" to max\n"; // noting important, only to show dry run
        }
        
    }

    cout <<"Max = " <<max <<endl;
    return 0;
    
}

