#include<iostream>
#include<string>
using namespace std;

bool checkPallindrome(string str){

    int st = 0;
    int end = str.length() - 1;

    
    while (st < end)
    {

        if (str[st] != str[end])
        {
            return false;
        }
        
        st++;end--;
    }

    return true;

}


int main(){

    string str;
    cout << "Write a String: ";
    cin >> str;
    
    if ( checkPallindrome(str))
    {
        cout << "Pallindrome." << endl; 
    }

    else{
        cout << "Not Pallindrome." << endl;
    }
  
    
    return 0;

}