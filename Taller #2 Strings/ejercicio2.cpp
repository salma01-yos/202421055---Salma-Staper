#include <iostream>
using namespace std;

bool hasVocal (string chain) {

    int counter = 0;
    for (int i = 0; i < chain.size() ; i++)
    {
        char letter = tolower(chain[i]);
        if (letter == 'a' && letter == 'e' && letter == 'i' && letter == 'o' && letter == 'u')
        {
            counter++;   
        }
        
    }
}
bool hasConsonant (string chain) {
    
    int counter = 0;
    for (int i = 0; i < chain.size() ; i++)
    {
        char letter = tolower(chain[i]);
        if (letter >= 65 && letter <= 122 && letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u')
        {
            counter++;   
        }
        
    }
}
bool hasSymbols (string chain) {
   
    int counter = 0;
    for (int i = 0; i < chain.size() ; i++)
    {
        char letter = chain[i];
        if (letter >= 33 && letter <= 47 || letter >= 58 && letter <= 64 || letter >= 91 && letter <= 96)
            (letter >= 0 && letter <= 9);
        {
            counter++;   
        }
        
    }
}
int main() {
    string password;
    cout << "Ingrese la cadena de texto: ";
    cin >> password;
    cout << "La cadena que ingresaste tiene" << hasVocal(password) << "vocales, tiene " << hasConsonant(password) << "consonantes y tiene " << hasSymbols(password) << "caracteres no alfabéticos." << endl; 
    return 0;
}
