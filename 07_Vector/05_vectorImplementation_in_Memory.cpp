#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec1 = {1,2,3,4};
    cout << vec1.size() << "\n";
    cout << vec1.capacity() << endl;
cout << endl;
    vec1.push_back(5);
    cout << vec1.size() << "\n";
    cout << vec1.capacity() << endl;
cout << endl;
    vec1.pop_back();
    cout << vec1.size() << "\n"; // size will reduce
    cout << vec1.capacity() << endl; // capacity wont change
cout << endl;    
    return 0;
}