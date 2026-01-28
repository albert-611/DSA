#include <iostream>
using namespace std;


int clearBit(int num, int i) {
    return num & (~0 << i);
}

int main() {
    int num = 15;  
    int i = 2;     

    cout << "Original number: " << num << endl;

    
    num = clearBit(num, i);

    cout << "After clearing bit " << i << ": " << num << endl;

    return 0;
}
