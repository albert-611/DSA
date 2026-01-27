#include <iostream>
using namespace std;

int setIthBit(int n, int i) {
    return n | (1 << i);
}

int main() {
    int n = 10;  // 1010
    int i = 1;   // bit position (0-based)

    n = setIthBit(n, i);

    cout << n;
    return 0;
}
