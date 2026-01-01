#include <iostream>
using namespace std;

int findVal(int *arr, int n, int val){

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
        
    }

    return -1;
    
}
int main(){
    
    int n;
    cout<<"Enter the size of an Array: ";
    cin >> n;

    int arr[n];
    cout <<"Enter Values of an Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int val;
    cout <<"Enter a value to search :";
    cin >> val;
    
    int pos = findVal(arr,n,val);
 
    cout << "Position = " <<pos <<endl;
    return 0;

}