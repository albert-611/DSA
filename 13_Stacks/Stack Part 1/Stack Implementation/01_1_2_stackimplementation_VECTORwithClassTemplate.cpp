#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <class T>
class Stack{
    public:
    vector<T> vec;

    void push(T val){
        vec.push_back(val);
    }

    void pop(){
        if (isEmpty())
        {
           cout << "Stack is empty.\n";
           return;
        }
        
        vec.pop_back();
    }

    T top(){
        // if (isEmpty())
        // {
        //    cout << "Stack is empty.\n";
        //    return -1;
        // }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size() == 0;
    }

};

int main(){
    Stack <int> i;

    i.push(3);
    i.push(2);
    i.push(1);

    while (!i.isEmpty())
    {
        cout << i.top() << " ";
        i.pop();
    }

    cout << endl;

    Stack <char> c;
    c.push('a');
    c.push('b');
    c.push('c');

    while (!c.isEmpty())
    {
        cout <<c.top() << " ";
        c.pop();
    }

    cout <<endl;
    Stack <string> s;
    s.push("Bala");
    s.push("Smith");
    s.push("Albert");

    while (!s.isEmpty())
    {
        cout <<s.top() << " ";
        s.pop();
    }
    
    return 0;
}