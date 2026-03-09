#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long factorial (int x){

    long long fact = 1;
    for ( int i = x; i > 0;i--)
    {
       fact *= i; 
    }
    return fact;  
}
int ways(int n, int m){

    int ways = 0;
    int totalWays = n + m - 2;
    int rightWay = m - 1;
    int downWays = n - 1;

    return (factorial(totalWays)) / (factorial(rightWay) * factorial(downWays));
}
int main()
{
    int n = 3, m = 3;

    cout <<"Total Ways: " << ways(n,m);
    return 0;
}