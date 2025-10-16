#include <iostream>

using namespace std;

bool hasMinLenght (string s) {
    return s.size() >= 8;
} 

bool hasSpecialChar (string s) {
    // abc!"#"
    int counter = 0;
    for (int i = 0; i < s.size() ; i++)
    {
        char letter = s[i];
        if (letter >= '!' && letter <= '/')
        {
            counter++;   
        }
        
    }
    return counter >= 3;
}

bool hasMayus (string s) {
    // abc!"#"
    int counter = 0;
    for (int i = 0; i < s.size() ; i++)
    {
        char letter = s[i];
        if (letter >= 'A' && letter <= 'Z')
        {
            counter++;   
        }
        
    }
    return counter >= 1;
}

bool hasMinus (string s) {
    // abc!"#"
    int counter = 0;
    for (int i = 0; i < s.size() ; i++)
    {
        char letter = s[i];
        if (letter >= 'a' && letter <= 'z')
        {
            counter++;   
        }
        
    }
    return counter >= 1;
}

int main() {
    string password;
    cout << "Ingrese una contrasena: ";
    cin >> password;

    if (hasMinLenght(password) && hasSpecialChar(password) && hasMayus(password) && hasMinus(password))
    {
        cout << "Contraseña válida" << endl;
    } else {
        cout << "Contraseña inválida" << endl;
    }
    
    return 0;
}

    