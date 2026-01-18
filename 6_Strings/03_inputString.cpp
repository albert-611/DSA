#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int main() {

    char word[30];
    cin >> word;  // ignores whitespace
    cout << "Your Word : " << word << endl;
    cout << "Length : " << strlen(word) << endl;

    cin.ignore(); // 🔑 clears leftover newline

    char sentence[30];
    cin.getline(sentence, 30, '*');
    cout << "Your Sentence : " << sentence << endl;
    cout << "Length : " << strlen(sentence) << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // It throws away all leftover input from the keyboard until you press Enter, so the next input works correctly.

    char sentence1[30];
    cin.getline(sentence1, 30);
    cout << "Your Sentence : " << sentence1 << endl;
    cout << "Length : " << strlen(sentence1) << endl;

    return 0;
}
