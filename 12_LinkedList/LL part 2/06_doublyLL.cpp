#include<iostream>

using namespace std;
 
class Node{
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    public:
        Node* head;
        Node* tail;

        DoublyList(){
            head =tail=NULL;
        }

        void push_fornt(int val){
            Node* newNode = new Node(val);

            if (head == NULL)
            {
                head = tail = newNode;
            }else{
                 newNode -> next = head;
                 head->prev = newNode;
                 head = newNode;
            }
            
        }

        void pop_front(){
            Node* temp = head;
            head = head -> next;

            if (head != NULL){
                head -> prev = NULL;
            }

            temp -> next = NULL;
            delete temp;
            
        }

        void pop_back(){
            Node* temp = tail;
            tail = tail->prev;

           tail ->next = NULL;
           delete temp;         
        }

        void push_back(int val){
            Node* newNode = new Node(val);

            if (tail ==NULL)
            {
                head = tail = newNode;
            }else{
                tail -> next = newNode;
                newNode ->prev = tail;
                tail = newNode;
            }
        }

        void printList(){
            Node* temp = head;

            while (temp != NULL)
            {
                cout << temp -> data << " <=> " ;
                temp = temp -> next;
            }
            cout << "NULL\n";
        }
};

int main(){
    DoublyList dbll;

    dbll.push_fornt(4);
    dbll.push_fornt(3);
    dbll.push_fornt(2);
    dbll.push_fornt(1);

    dbll.printList(); //1 <=> 2 <=> 3 <=> 4 <=> NULL

    dbll.pop_front();//del x=x 1
    dbll.printList(); //2 <=> 3 <=> 4 <=> NULL

    dbll.push_back(6);
    dbll.push_back(7);
    dbll.push_back(8);
    dbll.push_back(9);
    dbll.printList(); //2 <=> 3 <=> 4 <=> NULL

    dbll.pop_back();
    dbll.pop_back();
    dbll.printList(); //2 <=> 3 <=> 4 <=> NULL


    return 0;
}