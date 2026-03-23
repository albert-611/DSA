#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    void pushEnd(int val){

        Node* newNode = new Node(val);

        if (head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
        
    }

    Node* gethead() { return head;}
    Node* gettail() { return tail;}

    void printLL(){

        Node* temp = head;
        while (temp != NULL){
            cout << temp -> data<< "-> ";
            temp = temp -> next;
        }
        
        cout << "NULL" <<endl;
    }
};

void removeCyle (Node* head){

    Node* slow = head;
    Node* fast = head;

    bool isCycle = false;
    while (fast && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if (slow == fast){
            isCycle = true;
            break;
        }     
    }

    if (!isCycle){
        cout <<"No Cycle\n";
        return;
    }
    
    slow = head;

    if (slow == fast){
        while (fast -> next != slow)
        {
            fast = fast -> next;
        }
        fast -> next = NULL;  
        cout << "Cycle break\n";

    }else{
        Node* prev = fast;

        while (slow != fast){
            slow = slow -> next;
            prev = fast;
            fast = fast -> next;
        }
        
        prev -> next = NULL;
        cout << "Cycle break\n";
    }
}

int main(){
    List ll;

    ll.pushEnd(1);
    ll.pushEnd(2);
    ll.pushEnd(3);
    ll.pushEnd(4);
    ll.pushEnd(5);
    ll.pushEnd(6);
    ll.pushEnd(7);
    ll.pushEnd(8);

    Node* temp = ll.gethead();

    int val;
    cout <<"Enter the node number to connect the tail: " <<endl;
    cin >> val;
    for (int i = 1; i <= val; i++)
    {
        temp = temp -> next;
    }
    
    ll.gettail() -> next = temp;
    removeCyle(ll.gethead());
    
    ll.printLL();
    return 0;
}