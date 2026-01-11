#include <iostream>
using namespace std;

int main(){

    int n = 3, m = 3;
    int student[n][m] = {{100, 100, 100},
                        {85, 74, 89},
                        {63, 72, 65}};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << student[i][j] << " ";
        }

        cout <<  endl;
        
    }
    

    return 0;
}