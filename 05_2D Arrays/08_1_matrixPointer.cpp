#include <iostream>
using namespace std;

int main(){



    int mat[4][4] = {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {27, 29, 37, 48},
            {32, 33, 39, 50}
    };

   
    cout <<mat <<" = "<< &mat[0][0]<<endl;
    cout <<mat <<" != "<< &mat[0][1]<<endl;
    cout <<mat + 1 <<" = " << &mat[1][0]<<endl;
    cout <<mat + 2 <<" = " << &mat[2][0]<<endl;
    cout <<mat + 3 <<" = " << &mat[3][0]<<endl;
    cout <<mat + 4 <<" = " << &mat[4][0]<<endl;


    return 0;

}