#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int gridWays(int rows, int cols, int n, int m){

    if (rows == n-1 && cols == m-1)
    {
        return 1;
    }

    if (rows >= n || cols >= m)
    {
        return 0;
    }
    
    
    return gridWays(rows+1, cols, n, m) + gridWays(rows, cols + 1, n, m);

  
}
int main()
{
    int n = 5, m = 4;
    int ways = gridWays(0,0,n,m);

    cout << "Number of Ways = " << ways <<endl;

    return 0;
}