#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int temp;

    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++)
    {
        // Inner loop for adjacent comparison
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                // temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;

                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2, 7, 6};
    int n = sizeof(arr) / sizeof(int);

    cout << "Before Sorting:\n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "\nAfter Sorting:\n";
    printArray(arr, n);

    return 0;
}
