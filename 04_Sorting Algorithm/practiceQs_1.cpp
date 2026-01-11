#include <iostream>
using namespace std;

void sortChar(char *ch, int n){

    for (int i = 0; i < n; i++)
    {
        int curr = ch[i];
        int prev = i - 1;

        while (prev >= 0 && ch[prev] < curr)
        {
            ch[prev + 1] = ch[prev];
            prev--;
        }

        ch[prev + 1] = curr;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << ch[i]<< " ";
    }
    
    cout << endl;
}

int main(){

    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(char);

    sortChar(ch, n);

    return 0;

}
    