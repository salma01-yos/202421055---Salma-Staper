#include <iostream>
using namespace std;

bool hasMinLenght (string nombreUsuario) {
    return nombreUsuario.size() >= 6 && nombreUsuario.size() <= 12; 

}

bool hasMayusFirst (string nombreUsuario) {

    if (nombreUsuario[0] >= 'A' && nombreUsuario[0] <= 'Z')
    {
        return true;
    }
        
    else 
   {
    return false; 
   }
}
bool hasNoSpaces(string nombreUsuario){
    if (nombreUsuario[0] == ' ') {
        return false;
    }
   
    else {
    return true;
    }
   
}

int main() 
{
    string nombreUsuario; 
    cout <<"Ingrese su nombre de Usuario para validar: " << endl;
    cin >> nombreUsuario;
    
    if (hasMinLenght(nombreUsuario) && hasMayusFirst(nombreUsuario) && hasNoSpaces(nombreUsuario)) {
        cout << "El nombre de usuario es válido" << endl; 
    } 
    else {
        cout << "El nombre de usuario no es válido" << endl; 
    }
}