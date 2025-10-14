#include <iostream>
#include <string>
using namespace std;

bool esVocal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string word, consonants = "";
    cout << "Ingresa una palabra: ";
    cin >> word;

    for (char c : word) {
        if (!esVocal(c)) {
            consonants += c;
        }
    }

    cout << "Consonantes: " << consonants << endl;
    return 0;
}
