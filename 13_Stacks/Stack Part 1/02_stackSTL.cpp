#include<iostream>
#include<stack>
using namespace std;

int main(){
    
// using STACK STL
    stack <int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout<< "Top : " << s.top() <<endl; // 1
    s.pop(); // 5 4 3 2 
    cout << "After Pop, Top element: " << s.top() << endl; // 2
    cout <<  "Size is : " << s.size() << endl; // size = 4

    if(s.empty()){
        cout << "stack is Empty.\n";
    }else{
        cout << "Stack is not Empty.\n"; // stack size is 4
    }

    cout << "Stack : ";
    while(!s.empty()){
        cout << s.top() << " "; // Stack : 2, 3, 4, 5
        s.pop();
    }
    return 0;
}