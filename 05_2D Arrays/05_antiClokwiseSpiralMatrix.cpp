#include <iostream>
using namespace std;

void spiralAntiClockwise(int mat[][5], int n, int m) {  

    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol) {

        // 1️⃣ Left column (top → bottom)
        for (int i = srow; i <= erow; i++) {
            cout << mat[i][scol] << " ";
        }

        // 2️⃣ Bottom row (left+1 → right)
        for (int j = scol + 1; j <= ecol; j++) {
            cout << mat[erow][j] << " ";
        }

        // 3️⃣ Right column (bottom-1 → top), only if more than one column
        if (scol < ecol) {
            for (int i = erow - 1; i >= srow; i--) {
                cout << mat[i][ecol] << " ";
            }
        }

        // 4️⃣ Top row (right-1 → left+1), only if more than one row
        if (srow < erow) {
            for (int j = ecol - 1; j > scol; j--) {
                cout << mat[srow][j] << " ";
            }
        }


        srow++; erow--;
        scol++; ecol--;
    }
}

int main() {

    int matrix[4][5] = {
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    spiralAntiClockwise(matrix, 4, 5);

    return 0;
}
