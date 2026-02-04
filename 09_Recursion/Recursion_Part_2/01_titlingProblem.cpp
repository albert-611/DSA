#include <iostream>
using namespace std;

int tilingProblem(int n){ // 2xn

    if (n == 0 || n == 1)
    {
        return 1;
    }
    
    // // verticle
    // int ans1 = tilingProblem(n - 1) ; // 2xn-1

    // // horizontal
    // int ans2 = tilingProblem(n - 2);

    return tilingProblem(n - 1) + tilingProblem(n - 2);
}
int main(){

    int n = 5 ;
    cout<<tilingProblem(n)<< endl;
    return 0;
}