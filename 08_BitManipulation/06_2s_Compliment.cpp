#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int twosComp = (~n) + 1;

    cout << twosComp;
    return 0;
}
