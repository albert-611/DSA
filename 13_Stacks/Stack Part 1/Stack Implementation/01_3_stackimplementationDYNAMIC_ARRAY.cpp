#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int capacity;
    int top;

    public:

    Stack ( int size = 2){
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void push(int val){

        if (top == capacity - 1){
            capacity *= 2;
            int *newArr = new int[capacity];

            for (int  i = 0; i <= top; i++){
                newArr[i] = arr[i];
            }
            
            delete[] arr;
            arr = newArr;
        }

        arr[++top] = val;
        cout << "Inserted : " << val << endl;
    }


    void display(){
        cout << "Stack: ";
        if (top == -1) {
            cout << "Underflow\n";
            return;
        }

        for (int i = top; i >= 0 ; i--)
        {
            cout << arr[i] << " ";
        }
        cout <<endl;     
    }

    void pop(){
        if (top == -1) {
            cout << "Underflow\n";
            return;
        }

        cout << "Poping Out: " << arr[top] <<endl;
        top--;
    }

    void findTop(){
        if (top == -1) {
            cout << "Underflow\n";
            return;
        }

        cout << "\nTop index: " << top << "\nTop : " << arr[top];
        cout << endl<< endl;
    }

    void displayandDelete(){
        if (top == -1) {
            cout << "Underflow\n";
            return;
        }
        while (top != -1)
        {
            cout << "\nTop index: " << top << "\nTop : " << arr[top];
            top --;
        }

        cout << endl;
        
    }

    ~Stack() {
        delete[] arr;
    }
};

int main(){

    Stack s(2);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout << endl;
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.findTop();
    s.display();

    s.push(1);
    s.push(2);

    s.findTop();
    s.display();

    s.displayandDelete();
    s.pop();
    return 0;
}