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

    void pop_Back(){
      if (head == NULL){
            cout << "Linked List is Empty\n";
            return;
        }  

        Node* temp = head;
        // use this condition when we dont have tail while(temp->next->next != NULL){...}
        while (temp -> next != tail) // when we have tail
        {
            temp = temp -> next;
        }
        temp -> next = NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key){

        Node* temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp -> data == key)
            {
                return idx + 1;
            }
            
            temp = temp -> next;
            idx++;
        }

        return -1;
        
    }

    int helper(Node* h, int key){

        if (h == NULL)
        {
            return -1;
        }

        if(h->data == key){
            return 0;
        }

        int idx = helper(h -> next, key);

        if (idx == -1)
        {
            return -1;
        }

        return idx + 1;    
    }

    int searchRecursive(int key){

        return helper(head, key);
    }

    void reverseLL(){

        Node* curr = head;
        Node* prev = NULL;
        tail = head;

        while (curr != NULL)
        {
            Node* next = curr -> next;
            curr -> next = prev;

            //updation
            prev = curr;
            curr = next;
        }

        head = prev;
        
    }

    int getSize(){
    Node* temp = head;
    int size = 0;

    while(temp != NULL){
        temp = temp->next;
        size++;
    }

    return size;
}

void deleteNnode(int n){

    int size = getSize();

    Node* prev = head;
    for (int i = 1; i < (size - n); i++)
    {
        prev = prev -> next;
    }
    
    Node* toDel = prev -> next;
    cout <<"going to Delete: "<< toDel->data << endl;

    prev -> next = toDel->next;  
    toDel -> next = NULL;        
    delete toDel;                
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
    ll.pop_Back();

    if (ll.searchItr(5) != -1)
    {
        cout <<"Found in Index = " << ll.searchItr(5) << endl;
    }else{
        cout << "5 is Not Found\n";
    }

      if (ll.searchItr(4) != -1)
    {
        cout <<"Found in Index = " << ll.searchItr(4) << endl;
    }else{
        cout << "4 is Not Found\n";
    }


    int idx = ll.searchRecursive(3);
    if ( idx != -1)
    {
        cout <<"Found in Index = " << idx + 1 << endl;
    }else{
        cout << "2 is Not Found\n";
    }

    idx = ll.searchRecursive(100);
    if (idx != -1)
    {
        cout <<"Found in Index = " << idx + 1 << endl;
    }else{
        cout << "100 is Not Found\n";
    }


    ll.print();
    ll.reverseLL();
    ll.print();

    ll.deleteNnode(2);
    ll.print();
    return 0;

}