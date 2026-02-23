#include <iostream>
using namespace std;

int getIthBit(int n, int i) {
    if (n & (1 << i)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int n = 5;   // binary: 0101
    int i = 2;   // check 2nd bit

    cout << "i-th bit is: " << getIthBit(n, i);

    return 0;
}
