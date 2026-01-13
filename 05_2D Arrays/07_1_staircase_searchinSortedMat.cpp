#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key){

    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            cout <<"Found at Cell ("<<i<<","<<j<<")" << endl;
            return true;
        }

        else if(mat[i][j] > key){
            //left
            cout <<"("<<i<<","<<j<<")" << endl; //this line is optional and its used for observing the movement of key search
            j--;
        }

        else{
            //down
            cout <<"("<<i<<","<<j<<")" << endl; //this line is optional and its used for observing the movement of key search
            i++;
        }
        
    }
    

    cout <<"Key is not found" << endl;
    return false;
}

int main(){

    int mat[4][4] = {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {27, 29, 37, 48},
            {32, 33, 39, 50}
    };

    search(mat,4,4,31);

    return 0;
}