#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int val){

    int st = 0, end  = n - 1;

    while (st <= end)
    {
    int mid = (st + end) / 2;

        if (arr[mid] == val)
        {
            return mid;
        }
        
        else if(arr[mid] < val) { // 2nd half

            st = mid + 1;
        }

        else{

            end = mid - 1;
        }
    }

    return -1;
    
}
int main(){

    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16}; 
    int n = sizeof(arr) / sizeof (int);

    int val = 12;
    int result = binSearch(arr, n, val);

    cout << result << endl;

    return 0;
}