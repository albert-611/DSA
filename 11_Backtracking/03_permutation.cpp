#include<iostream>
#include<algorithm>
using namespace std;
 
void findPermutation(string str, string ans){

    int n = str.size();
    if (n == 0) cout << ans << endl;
    
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        string nextStr = str.substr(0,i) + str.substr(i+1, n - i - 1);
        findPermutation(nextStr,ans + ch);
    }   
}

int main()
{
 
    string str = "labio"; string ans ="";

    // sort(str.begin(), str.end()); //converting to lexicography
    findPermutation(str,ans);
    return 0;
}