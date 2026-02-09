#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int si, int ei, int mid) { // O(n)

    vector<int> temp;

    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // copy temp back to original vector
    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}

void mergeSort(vector<int>& arr, int si, int ei) { // O(n log n)

    if (si >= ei) return;

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);       // left half
    mergeSort(arr, mid + 1, ei);   // right half
    merge(arr, si, ei, mid);
}

void printArray(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> arr = {6, 3, 7, 5, 2, 4};

    mergeSort(arr, 0, arr.size() - 1);
    printArray(arr);

    return 0;
}
