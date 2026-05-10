#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    Node* top;

    public:

    Stack(){
        top = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        newNode -> next = top;

        cout << newNode->data << " Inserted Successfully.\n";
        top = newNode;
    }

    void pop(){
        if(top == NULL){
            cout<< "Underflow\n";
            return;
        }

        Node* temp = top;

        cout << "Popped: " << top->data << endl;
        top = top -> next;
        delete temp;
    }

    void display(){
        Node* temp = top;
        cout << "Stack: ";
        while (temp != NULL){
            cout<< temp -> data << " ";
            temp = temp -> next;
        }     
        cout<< endl;
    }

    void findTop(){
        if (top == NULL) {
            cout << "Underflow\n";
            return;
        }

        cout << "Top : "<< top->data<<endl;
    }

    ~Stack(){
        while (top != NULL) {
            Node* temp = top;
            cout <<temp->data << " Deleted\n";
            top = top->next;
            delete temp;
        }
    }
};
int main(){

    Stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.display();
    
    s.push(8);
    s.push(7);

    s.findTop();
    s.display();
    
    return 0;
}