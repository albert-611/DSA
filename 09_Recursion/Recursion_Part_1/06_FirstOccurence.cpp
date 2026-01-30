#include <iostream>
#include <vector>
using namespace std;

int firstOccur(const vector<int> &arr, int i, int target){

if (i == arr.size())
{
    return -1;
}

if (arr[i] == target)
{
    return i;
}

return firstOccur(arr, i+1, target);
    
}

int main(){
    
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    int i = 0;
    int target = 3;

    cout << firstOccur(arr, i, target);
    return 0;
}