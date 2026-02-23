#include <iostream>
using namespace std;

int main(){

    int n, pos, val, count;
    
    cout <<"Enter the size of Array: ";
    cin>>n;

    int arr[n];
    cout <<"Enter the Array values: ";

    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }

    cout<<"How many Values you want to Insert : ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cout <<"Enter the Position : ";
        cin>> pos;

        cout <<"Enter the Value : ";
        cin >> val;

        if (pos > n || pos < 0){
        cout <<"Invalid position";
        continue;
        }

        for (int j = n ; j > pos ; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[pos] = val;
        n++;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout <<"Array ["<<i<<"] = " << arr[i] <<endl;
    }


    return 0;
    
}