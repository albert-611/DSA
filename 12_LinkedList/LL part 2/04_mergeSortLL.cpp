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
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    Node* getHead(){return head;}

    void push_back(int val){
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

// Split at middle
Node* splitatMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (prev != NULL)
    {
        prev->next = NULL;
    }

    return slow;
}

// Merge (recursive style, like your earlier code)
Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;

    Node* head = NULL;
    Node* tail = NULL;

    Node* i = left;
    Node* j = right;

    while (i != NULL && j != NULL) {
        Node* temp = NULL;
        if (i->data <= j->data) {
            temp = i;
            i = i->next;
        } else {
            temp = j;
            j = j->next;
        }

        if (head == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    if (i != NULL) tail->next = i;
    if (j != NULL) tail->next = j;

    return head;
}

// Merge Sort
Node* mergeSort(Node* head){

    if (head == NULL || head->next == NULL){
        return head;
    }

    Node* rightHead = splitatMid(head);

    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);

    return merge(left, right);
}

int main(){
    List ll;

    ll.push_back(1);
    ll.push_back(3);
    ll.push_back(5);
    ll.push_back(2);
    ll.push_back(6);
    ll.push_back(4);

    cout << "Original List:\n";
    ll.print();

    ll.head = mergeSort(ll.getHead());

    cout << "Sorted List:\n";
    ll.print();

    return 0;
}