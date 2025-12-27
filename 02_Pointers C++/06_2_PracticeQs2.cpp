// Find out the Output
#include <iostream>
using namespace std;

int main(){

    int a = 32;
    int *ptr = &a; //ptr is reference to a...what what ever is changes to ptr, change to a

    char ch = 'A'; //65
    char &cho = ch; // cho is reference to ch...what what ever is changes to cho, change to ch 

    cho += a; // 65 + 32 = 97, now ch = 'a' which is 97
    *ptr += ch; // 32 + 97 = 129, now a = 129 

    cout << a << " , " << ch <<endl;

    return 0;
}

//float*a,b; means float *a and float b;