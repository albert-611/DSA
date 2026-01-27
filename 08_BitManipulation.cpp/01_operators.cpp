#include <iostream>
using namespace std;

int main() {

    int a = 5;   // 0101
    int b = 3;   // 0011

    cout << "a = " << a << ", b = " << b << endl << endl;

    // Bitwise AND
    cout << "Bitwise AND (a & b): " << (a & b) << endl;

    // Bitwise OR
    cout << "Bitwise OR  (a | b): " << (a | b) << endl;

    // Bitwise XOR
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;

    // Left Shift
    cout << "Left Shift (a << 1): " << (a << 1) << endl;

    // Right Shift
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;

    cout << endl;

    // Some common bit tricks
    cout << "Is a odd? (a & 1): " << (a & 1) << endl;
    cout << "Set 2nd bit of a: " << (a | (1 << 2)) << endl;
    cout << "Clear 0th bit of a: " << (a & ~(1 << 0)) << endl;
    cout << "Toggle 1st bit of a: " << (a ^ (1 << 1)) << endl;

    return 0;
}
