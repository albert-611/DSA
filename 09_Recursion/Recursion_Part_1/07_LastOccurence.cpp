#include <iostream>
#include <vector>
using namespace std;

int LastOccur(const vector<int> &arr, int i, int target){


if (i < 0)
{
    return -1;
}

if (arr[i] == target)
{
    return i;
}

return LastOccur(arr, i-1, target);
}

int main(){
    
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    int i = arr.size() - 1;
    int target = 3;

    cout << LastOccur(arr, i, target);
    return 0;
}