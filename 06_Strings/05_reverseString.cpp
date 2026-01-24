#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s)       
/* Why use & (reference)?

It means the function works on the original string, not a copy.

Any change made inside the function directly affects the string in main().

❌ Without & → string is copied → original string does NOT change
✅ With & → original string is modified*/

{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        swap(s[start++], s[end--]);
        
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;   // reads string without spaces

    reverseString(str);

    cout << "Reversed string: " << str << endl;
    return 0;
}
