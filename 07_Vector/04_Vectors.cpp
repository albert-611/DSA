#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec1 = {1,2,3,4};
    cout << vec1.size() << "\n";
    cout << vec1.capacity() << endl;

    vector  <int> vec2(10, -1);
    for (int i = 0; i < 10; i++)
    {
        cout << vec2[i] << " ";
    }

    cout <<endl;
    
    return 0;
}