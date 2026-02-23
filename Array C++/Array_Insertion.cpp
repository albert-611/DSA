#include <iostream>
using namespace std;

int main(){

    int n, position, val;
    
    cout <<"Enter the Size of Array: ";
    cin >>n;

    int arr[n];
    cout << "Enter " << n <<" Numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
         cout <<"Array ["<< i <<"] = "<<arr[i] << endl;
    }
    
    cout <<"Enter Postion of Insertion: ";
    cin >> position;

    cout <<"Enter the Value: ";
    cin >>val;

    for (int i = n; i > position; i--)
    {
       arr[i] = arr[i-1];
    }

    arr[position] = val;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout <<"Array ["<< i <<"] = "<<arr[i] << endl;
    }

}