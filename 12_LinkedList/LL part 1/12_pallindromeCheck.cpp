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

    void insertVal(int val){

        Node* newNode = new Node (val);
        if (head==NULL)
        {
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
        
    }

    bool isPallindrome(){

        if (head == NULL || head ->next == NULL) return true;
        
        Node* slow = head;
        Node* fast = head;

        while (fast && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        Node* curr = slow;
        Node* prev = NULL;
        Node* next = NULL;

        while (curr != NULL)
        {
            next = curr -> next;
            curr -> next = prev;
            
            //updation
            prev = curr;
            curr = next;
            
        }
        
        Node* left = head;
        Node* right = prev;

        while (right != NULL)
        {
            if (left -> data != right -> data)
            {
                return false;
            }

            left = left -> next;
            right = right -> next;
            
        }
        
        return true;
        
    }

    void printLL(){

        Node* temp = head;
        while (temp != NULL){
            cout << temp -> data << "-> ";
            temp = temp ->next;
        }      
    }
};

int main(){
    List ll;
    
    int n;
    cout << "Enter Number of Inputs: ";
    cin >> n; // this the place of 

    cout <<"Enter Inputs: ";
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        ll.insertVal(val);    
    }
    
    //ll.printLL();

    if (ll.isPallindrome())
    {
        cout << "true\n";
    }else{
        cout << "false\n";
    }
    
    return 0;
}