#include <iostream>
using namespace std;

bool hasDigits (string accesCode) {
     int counter = 0;
    for (int i = 0; i < accesCode.size() ; i++)
    {
        char letter = accesCode[i];
        if (letter >= 0 && letter <= 9)
        {
            counter++;   
        }
        
    }
     return counter >= 1; 
}
bool hasSpecialSymbols (string accesCode) {
     int counter = 0;
    for (int i = 0; i < accesCode.size() ; i++)
    {
        char letter = accesCode[i];
        if (letter >= 33 && letter <= 47)
        {
            counter++;   
        }
        
    }
     return counter >= 1; 
}
bool hasNoSpaces(string nombreUsuario){
    if (nombreUsuario[0] == ' ') {
        return true;
    }
   
}
int main(){
    string accesCode;
    cout << "Ingrese el código de acceso" << endl;
    cin >> accesCode;

    if (hasDigits(accesCode) && hasSpecialSymbols(accesCode) && hasNoSpaces(accesCode)
    {
        cout << "El código de acceso es válido" << endl;
    }
    else {
        cout << "El código de acceso no es válido" << endl;
    }
    return 0;
}
