#include<iostream>
using namespace std;
 
class Node {

public:

    int data;
    Node *next;
    
    Node(int val){
        data = val;
        next = NULL;
    }


    ~Node(){

        cout << "Node Destructor for data" << data << endl;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        
    }
};

class List{
    Node *head;
    Node *tail;

public:

    List(){
        head = NULL;
        tail = NULL;
    }

    ~List(){

        cout << "Destructor of List\n";
        if (head != NULL){
            delete head;
            head = NULL;
        }
        
    }

    void push_front(int val){ // resposible for inserting at the begining
        Node* newNode = new Node(val); // allocating memory

        if (head == NULL){
            head = tail = newNode;
        }else{
            newNode-> next = head;
            head = newNode;
        }
        
    }

    void push_back(int val){// resposible for inserting at the end
        Node *newNode = new Node(val);// allocating memory

        if (head == NULL)
        {
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
        
    }

    void insertatPos(int val, int pos){

        Node* newNode = new Node (val);
        // insert at beginning
        if (pos == 1)
        {
           newNode -> next = head;
           head = newNode;

            if (tail == NULL)
            {
                tail = newNode;
            } 

            return;

        }  
        
        Node* temp = head;
        // move to the node before the position
        for (int i = 1; i < pos - 1 ; i++)
        {
            if (temp == NULL)
            {
                cout <<"Position out of Range\n";
                return ;
            }
            
            temp = temp -> next;
        }
        
        // insertion
        newNode -> next = temp -> next;
        temp -> next = newNode;

        // update tail if inserted at end
        if (newNode -> next == NULL)
        {
            tail = newNode;
        }
        
    }

    void pop_Front(){

        if (head == NULL){
            cout << "Linked List is Empty\n";
            return;
        }

        Node *temp = head;

        head = head -> next;
        temp -> next = NULL;
        delete temp;   
    }   
    void print(){ // resposible for printing
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    
};

int main()
{
    List ll;

    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.insertatPos(10,2);

    ll.pop_Front();
    ll.print();
    return 0;
}