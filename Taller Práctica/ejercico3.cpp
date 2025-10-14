#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    string word1, word2;
    cout << "Ingresa la primera palabra: ";
    cin >> word1;
    cout << "Ingresa la segunda palabra: ";
    cin >> word2;

    
    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    transform(word2.begin(), word2.end(), word2.begin(), ::tolower);

    
    set<char> letters1(word1.begin(), word1.end());
    set<char> letters2(word2.begin(), word2.end());

    int count = 0;
    for (char letter : letters1) {
        if (letters2.count(letter)) {
            count++;
        }
    }
    cout << "Cantidad de letras que aparecen en ambas palabras: " << count << endl;
    return 0;

}
