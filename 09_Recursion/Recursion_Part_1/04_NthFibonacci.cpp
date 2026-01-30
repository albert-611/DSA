#include<iostream>
using namespace std;

int fibo(int n){

    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
    
}


int main(){

    int n = 6;
    
    cout <<"First "<<n<<" Fibonacci Values are : ";
    for (int i = 0; i <= n; i++)
    {
        cout << fibo(i) << " ";
    }

    cout<<endl<<"Nth Fibonacci Value is : ";
    
    int result = fibo(n);
    cout << result << endl;


    return 0;
}