#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool containsWordStartingWithA(const string& s) {
    stringstream ss(s);
    string word;

   
    while (ss >> word) {
        // чи слово починається з 'a' або 'A'
        if (word[0] == 'a' || word[0] == 'A')
        {
            return true; // Знайдено слово
        }
    }
    return false; //  не знайдено
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    if (containsWordStartingWithA(str)) {
        cout << "The string contains a word that starts with 'a'." << endl;
    }
    else {
        cout << "The string does not contain any word that starts with 'a'." << endl;
    }

    return 0;
}
