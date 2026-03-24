#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(const list<int>& ll){ //faster version
    for (auto itr = ll.begin(); itr != ll.end(); itr++){
        cout <<(*itr) << " -> ";
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

    auto it = ll.begin();
    advance(it, 2); // insert after 2nd position

    ll.insert(it, l2.begin(), l2.end());

    printList(ll);
    return 0;
}