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

class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head = tail =  NULL;
        
    }

    void insertion(int val){
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail -> next = newNode;
        tail = newNode;
    }
};

int getLength(Node* head){
    
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        cout << temp -> data <<"-> ";
       temp = temp -> next;
       count++;
    }
    cout<<"NULL"<<endl;
    return count;
}
Node* getIntersectionPoint(Node* head1, Node* head2){
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    int diff = abs(l1-l2);
    if (l1 > l2)
    {
        while(diff--) ptr1 = ptr1 -> next;
    }else{
        while(diff--) ptr2 = ptr2 -> next;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2) return ptr1;

        ptr1 = ptr1 -> next;
        ptr2 = ptr2 -> next;
    }
    
    return NULL;
    
}
int main(){

   List L1, L2;
   int n1, n2, val, choice, pos;

   cout << "Enter the Size of  List 1: ";
   cin >> n1;

   for (int i = 0; i < n1; i++){
        cout << "Data for L1 of node "<< i + 1<<": ";
        cin >> val;
        L1.insertion(val);
   }

   cout << endl;
   cout << "Enter the Size of  List 2: ";
   cin >> n2;

   for (int i = 0; i < n2; i++){
        cout << "Data for L2 of node"<< i + 1<<": ";
        cin >> val;
        L2.insertion(val);
   }

   cout << "\nchoose 1 for Linked List 1\nChoose 2 for Linked List 2" << endl;
   cout << "Enter which Linked List's tail you want to Connect: ";
   cin >> choice;
   cout << "Enter the position of Target List from (1 to N): ";
   cin >> pos;

   Node* sourceTail = (choice == 1) ? L1.tail : L2.tail;
   Node* targetHead = (choice == 1) ? L2.head : L1.head;

   Node* temp = targetHead;
   for (int i = 1; i < pos && temp != NULL; i++){
        temp = temp -> next;
   }

   if (temp != NULL){
       sourceTail->next = temp;
       cout << "\nList Inserted Successful.\n";
   }else{
    cout << "\nInvalid Position.\n";
   }

   Node* intersection = getIntersectionPoint(L1.head, L2.head);
   cout << (intersection ? "\nThe Intersection Data is " + to_string(intersection->data) : "\nNo Intersection");

   return 0;
}
