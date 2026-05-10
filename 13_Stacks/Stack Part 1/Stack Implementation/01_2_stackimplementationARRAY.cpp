#include<iostream>
using namespace std;

class Stack {

    int arr[5];
    int top = -1;

public:

    void push(int val) {

        if (top >= 4) {
            cout << "Overflow\n";
            return;
        }

        ++top;
        arr[top] = val;

        cout << "Value " << val<< " is inserted in the Stack.\n";
    }

    void pop() {

        if (top == -1) {
            cout << "Underflow\n";
            return;
        }

        top--;
    }

    void display() {

        if (top == -1) {
            cout << "Underflow\n";
            return;
        }

        cout << "Displaying Stack : ";

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl << endl;
    }

    void displayanddelete() {

        if (top == -1) {
            cout << "Underflow\n";
            return;
        }

        while (top != -1) {
            cout << arr[top] << " ";

            top--;
        }

        cout << endl << endl;
    }

    void findTop() {

        if (top == -1) {
            cout << "Underflow\n";
            return;
        }

        cout << "Top : " << arr[top] << endl;
    }
};

int main() {

    Stack s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    s.display();

    s.push(0);

    s.pop();
    s.push(0);

    cout<<endl;
    s.findTop();
    s.display();

    s.pop();
    s.pop();

    s.findTop();

    cout << "Displaying and Delete : ";
    s.displayanddelete();

    return 0;
}