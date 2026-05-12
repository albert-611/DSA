#include<iostream>
#include<stack>
using namespace std;

void pushatBottom(stack<int> &s, int val){
    if (s.empty())
    {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushatBottom(s,val);
    s.push(temp);
    
}
void reverse(stack<int> &s){
    if (s.empty()){
        return;
    }
    
    int temp = s.top();
    s.pop();
    reverse(s); 
    pushatBottom(s,temp);
}

void display(stack<int>&s){

    stack<int> temp = s;
    while (!temp.empty()){
       cout<< temp.top() << " ";
       temp.pop();
    }
    return;
}

int main(){
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    cout <<"Original Stack: ";
    display(s);
    reverse(s);

    cout<< endl;

    cout <<"Reversed Stack: ";
    display(s);

    cout << endl;

    return 0;
}