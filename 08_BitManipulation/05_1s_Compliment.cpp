#include <iostream>
using namespace std;

int main() {
    int n = 5;   // 00000101

    int onesComp = ~n;

    cout << onesComp;
    return 0;
}
