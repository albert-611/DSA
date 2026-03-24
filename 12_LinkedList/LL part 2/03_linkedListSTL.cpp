#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(const list<int>& ll){ //faster version
    for (auto itr = ll.begin(); itr != ll.end(); itr++){
        cout <<*itr << " -> ";
    }
    cout <<"NULL"<<endl;
}
// void printList(list<int> ll){ // slower version

//     list<int>::iterator itr;

//     for (itr = ll.begin(); itr != ll.end(); itr++){
//         cout <<(*itr) << " -> ";
//     }
//     cout <<"NULL"<<endl;

// }
int main()
{
    list<int> ll;

    ll.push_front(4); 
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);

    printList(ll);
    cout <<"Size of the Linked List is : " << ll.size() <<endl;

    cout <<"Head : "<<ll.front()<<endl;
    cout <<"Tail : "<<ll.back()<<endl;

    ll.pop_front();
    printList(ll);

    ll.pop_back();
    printList(ll);

    list<int> l2 = {7, 8, 9};

    //! insert at any position
    auto it = ll.begin();
    advance(it, 2); // insert after 2nd position

    ll.insert(it, l2.begin(), l2.end());

    printList(ll);

    //! remove any value at any position
    auto ite = ll.begin();
    advance(ite, 2); // move to 3rd element
    ll.erase(ite);   // removes that element
    printList(ll);

    //! remove any value in its range
    auto start = ll.begin();
    auto end = ll.begin();
    advance(start, 1); // 2nd element
    advance(end, 4);   // 5th element
    ll.erase(start, end); // removes 2nd,3rd,4th elements

    printList(ll);

    //! removes all elements with value 5
    ll.remove(5); 
    printList(ll);
    return 0;
}