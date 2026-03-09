#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int gridWays(int rows, int cols, int n, int m, string ans){

    if (rows == n-1 && cols == m-1)
    {
        cout << ans << endl;
        return 1;
    }

    if (rows >= n || cols >= m)
    {
        return 0;
    }
    
    
    return gridWays(rows+1, cols, n, m , ans + 'D') + gridWays(rows, cols + 1, n, m, ans + 'R');

}
int main()
{
    int n = 3, m = 3;
    string ans = "";
    int ways = gridWays(0,0,n,m,ans);

    cout << "Number of Ways = " << ways <<endl;

    return 0;
}