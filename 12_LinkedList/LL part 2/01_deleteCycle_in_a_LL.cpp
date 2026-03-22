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

        if (head == NULL)
        {
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
        
    }

    Node* getHead() { return head; }
    Node* getTail() { return tail; }
};

bool isCycle(Node* head){

    Node* slow = head;
    Node* fast = head;

    int count = 0;
    while (fast && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;

        count ++;
        if (slow == fast)
        {
            return true;
        }
        
    }

    return false;   
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

   ll.getTail() -> next = ll.getHead();

   if (isCycle(ll.getHead()))
   {
        cout << "It is Cycle\n";
   }else{
        cout <<"It is not Cycle\n";
   }
    
    return 0;
}