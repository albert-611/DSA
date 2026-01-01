#include <iostream>
#include <algorithm> // for sort()
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

    int arr[] = {10, 2, 14, 6, 8, 16, 4, 12}; 
    int n = sizeof(arr) / sizeof (int);

    int val = 12;

    sort(arr, arr + n);
    int result = binSearch(arr, n, val);

    cout << result << endl;

    return 0;
}