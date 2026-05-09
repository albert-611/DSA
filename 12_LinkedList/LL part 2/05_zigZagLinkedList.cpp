#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    Node* getHead(){return head;}

    void push_front(int val)
    {                                  // resposible for inserting at the begining
        Node *newNode = new Node(val); // allocating memory

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {                                  // resposible for inserting at the end
        Node *newNode = new Node(val); // allocating memory

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print() { // resposible for printing
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

Node* splitatMid(Node* head){

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast && fast -> next != NULL)
    {
        prev = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    if (prev  != NULL)
    {
       prev -> next =NULL;
    }

    return slow;
    
}

Node* reverse(Node* head){

    Node* prev = NULL;
    Node* curr = head;
    Node* next =  NULL;

    while (curr != NULL)
    {
       next = curr -> next;
       curr -> next = prev;

       prev = curr;
       curr = next;
    }
    
    return prev;
}

Node* zigZag(Node *head){

    Node* rightHead =  splitatMid(head);
    Node* rightHeadRev =  reverse (rightHead);

    //!merging the two nodes
    Node* left = head;
    Node* right = rightHeadRev;
    Node* tail = right;

    while (left != NULL && right != NULL)
    {
       Node* nextLeft = left -> next;
       Node* nextRight = right -> next;

       left -> next = right;
       right -> next = nextLeft;

       tail = right;

       left = nextLeft;
       right = nextRight;
    }
    
    if (right != NULL)
    {
        tail -> next = right;
    }
    return head;  
}

int main()
{
    List ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    zigZag(ll.getHead());

    ll.print();
    return 0;
}