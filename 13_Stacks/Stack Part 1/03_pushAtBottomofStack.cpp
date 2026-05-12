#include<iostream>
#include<stack>
using namespace std;

void pushAtbottom(stack<int> &s , int val){

    if (s.empty()){
        s.push(val);
        return;
    }
    
    int temp = s.top(); // first storing the stack's top value
    s.pop(); // then poping out the Top
    pushAtbottom(s, val); // send the stack every time after poping out each top...keeping val safe (val will be same at every stage)
    s.push(temp);// backtracking part 
}
int main(){
    stack <int> s;
    s.push(3);
    s.push(2);
    s.push(1);

   cout<< "Top : " << s.top() << " (Before pushing 4 in the stack)"<<endl;
    pushAtbottom(s, 4);

    cout<< "Top : " << s.top()<<" (4 is successfully push at bottom)"<<endl;
 
    cout << "Stack: ";
    while (!s.empty())
    {
        cout <<s.top() << " ";
        s.pop();
    }
    cout<< endl;
   
    return 0;
    
}