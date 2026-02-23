#include <iostream>
using namespace std;

void passingPosVal(int arr[], int &n, int pos, int val){

    if (pos < 0 || pos > n)
    {
        cout <<"Invalid position!";
        return;
    }
    
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;
    
}


int main(){

    int pos, val, n;

    cout<<"Enter the size of Array: ";
    cin >> n;

    int arr[100000];
    cout <<"Enter " << n <<" Numbers : "; 
    for (int i = 0; i < n; i++)
    {
     cin >> arr[i];   
    }

    cout << endl;

    int count;
    cout << "Enter How many values do you want to insert : ";
    cin >> count;


    for (int i = 0; i < count; i++)
    {
        cout <<"Enter position Number: ";
        cin >> pos;

        cout <<"Enter the Value: ";
        cin >> val;

        passingPosVal(arr, n, pos, val);
    }

    cout <<endl;
    cout <<"Final Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout <<"Array["<<i<<"] = "<< arr[i] << endl;
    }
       
}

