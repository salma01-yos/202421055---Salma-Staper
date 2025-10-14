#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(const string word) {
   int n = word.size();

    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - 1 - i]) {
            if (tolower(word[i]) != tolower(word[n - 1 - i])) {
                return false; 
            }
        }
    }
    return true;
}
int main() {
    string word1, word2;
    cout << "Ingresa la primera palabra: ";
    cin >> word1;
    cout << "Ingresa la segunda palabra: ";
    cin >> word2;

    if (esPalindromo(word1)) {
        cout << word1 << " es un palíndromo." << endl;
    } else {
        cout << word1 << " NO es un palíndromo." << endl;
    }

    if (esPalindromo(word2)) {
        cout << word2 << " es un palíndromo." << endl;
    } else {
        cout << word2 << " NO es un palíndromo." << endl;
    }

    return 0;
}
