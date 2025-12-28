#include <iostream>
using namespace std;

int main(){

    int arr[] = {59,56,34,12,33,3,45,12,55};
    int n = sizeof(arr) / sizeof(int);

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            cout <<"Assigning value " << arr[i] <<" to min\n"; // noting important, only to show dry run
        }
        
    }

    cout <<"Min = " <<min <<endl;
    return 0;
    
}

