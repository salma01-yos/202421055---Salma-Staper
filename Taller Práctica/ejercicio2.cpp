#include <iostream>
#include <string>
using namespace std;

char aMayuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

char aMinuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int main() {
    string word, result = "";
    cout << "Ingresa una palabra sin espacios: ";
    cin >> word;

    for (int i = 0; i < (int)word.size(); i++) {
        if (i % 2 == 0) {
            result += aMinuscula(word[i]);
        } else {
            result += aMayuscula(word[i]);
        }
    }

    cout << "Resultado: " << result << endl;
    return 0;
}
