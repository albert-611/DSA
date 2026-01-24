#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    // strlen
    cout << "Length of str1: " << strlen(str1) << endl;

    // strcpy
    strcpy(str2, str1);
    cout << "str2 after copy: " << str2 << endl;

    // strcat
    strcat(str1, " World");
    cout << "str1 after concat: " << str1 << endl;

    // strcmp
    if (strcmp(str1, str2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // strchr
    char *p = strchr(str1, 'o');
    if (p)
        cout << "'o' found at position: " << p - str1 << endl;

    // strstr
    char *q = strstr(str1, "World");
    if (q)
        cout << "'World' found at position: " << q - str1 << endl;

    return 0;
}
