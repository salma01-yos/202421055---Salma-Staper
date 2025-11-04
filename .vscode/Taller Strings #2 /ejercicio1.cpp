#include <iostream>
#include <string>
using namespace std;

bool hasChars (string chain) {
    
    int counter = 0;
    for (int i = 0; i < chain.size() ; i++)
    {
        char letter = tolower(chain[i]);
        if (letter >= 65 && letter <= 122 && letter != ' ') 
        {
            counter++;   
        }
        
    }
}

int main() {
    string text;
    cout << "Ingrese la cadena de texto: ";
    cin >> text;
    cout << text << "El texto ingresado tiene " << hasChars(text) << "caracteres." << endl; 
    return 0;
}
