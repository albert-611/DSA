#include <iostream>
using namespace std;

void evenDiagonalSum(int mat[][4], int n, int m) {

    int pri = 0, sec = 0;
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                pri += mat[i][j];
            }

            else if (j == n - i - 1)
            {
                sec += mat[i][j];
            }
            
        }
        
   }

   cout << "Primary Sum: " << pri <<endl;
   cout <<"Secondary Sum: "<< sec <<endl;
   cout <<"Total Sum: " << pri + sec << endl;
   

}

void oddDiagonalSum(int mat[][3], int n, int m) {

    int pri = 0, sec = 0;
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                pri += mat[i][j];
            }

            else if (j == n - i - 1)
            {
                sec += mat[i][j];
            }
            
        }
        
   }

   cout << "Primary Sum: " << pri <<endl;
   cout <<"Secondary Sum: "<< sec <<endl;
   cout <<"Total Sum: " << pri + sec << endl;
   

}

int main() {

    int n = 4, m = 4;

    cout <<"Even Matrix: "<< endl;
    int matrix[4][4] = { // even matrix
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
    evenDiagonalSum(matrix, n, m);

    cout << endl;
    cout << "Odd Matrix: "<< endl;
    int matrix2[3][3] = { // odd matrix
        {1,  2,  3},
        {4,  5,  6},
        {7,  8,  9}
    };

    n = 3, m = 3;

    oddDiagonalSum(matrix2, n, m);


    return 0;
}
