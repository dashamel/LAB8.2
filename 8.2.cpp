#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool containsWordStartingWithA(const string& s) {
    stringstream ss(s);
    string word;

   
    while (ss >> word) {
        // �� ����� ���������� � 'a' ��� 'A'
        if (word[0] == 'a' || word[0] == 'A')
        {
            return true; // �������� �����
        }
    }
    return false; //  �� ��������
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
