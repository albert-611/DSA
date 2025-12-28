#include <iostream>
using namespace std;

void printArr(int nums[]){

    int n = sizeof(nums) / sizeof(int);

    cout <<"Size of Array = " << sizeof(nums) <<endl;
    cout << "Length of Array = "<< n <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] <<",";
    }
    
    cout <<endl;
}

int main(){

    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(int);


    cout << "Array Size =" <<sizeof(arr)<<endl;
    cout << "Length of Array =" << n <<endl<<endl;

    cout<<"printARR function: "<<endl;
    printArr(arr);
    
    cout << "Our Actual array size is 20 and length of the Array is 5" <<endl<<"But in printArr() array size becomes 4 and length of array becomes 1" <<endl;
    return 0;
}