#include<iostream>
using namespace std;

void binaryString(int n, int lp , string ans){

    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    
    if (lp != 1)
    {
        binaryString(n-1, 0, ans + '0');
        binaryString(n-1, 1, ans + '1');
    } else {
        binaryString(n-1, 0, ans + '0');
    }
    
}
int main(){

    int n = 3, lp = 0;
    string ans = "";
    binaryString(n,lp,ans);
    return 0;
}