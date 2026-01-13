#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key) {

    for (int i = 0; i < n; i++) {

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            cout << "Checking (" << i << "," << mid << ")" << endl; // optional

            if (mat[i][mid] == key) {
                cout << "Found at Cell (" << i << "," << mid << ")" << endl;
                return true;
            }
            else if (mat[i][mid] < key) {
                low = mid + 1;   // move right
            }
            else {
                high = mid - 1;  // move left
            }
        }
    }

    cout << "Key is not found" << endl;
    return false;
}

int main() {

    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    search(mat, 4, 4, 32);
    return 0;
}
