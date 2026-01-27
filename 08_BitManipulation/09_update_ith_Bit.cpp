#include <iostream>
using namespace std;

int main() {
    int n = 10;   // 1010 in binary
    int i = 1;    // bit position to update
    int v = 1;    // new value (0 or 1)

    n = (n & ~(1 << i))| (v << i);


    cout << "Updated n = " << n << endl;  // Output in decimal
    return 0;
}
