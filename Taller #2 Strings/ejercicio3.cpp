#include <iostream>
using namespace std;

bool hasScript (string code) {
    
    int counter = 0;
    for (int i = 0; i < code.size() ; i++)
    {
        if (code[i] == '-')
        {
            counter++;   
        }
        
    }

}
bool hasDigits (string code) {
     int counter = 0;
    for (int i = 0; i < code.size() ; i++)
    {
        char letter = code[i];
        if (letter >= 0 && letter <= 9)
        {
            counter++;   
        }
        
    }
}
bool hasUpperEnd (string code) {
    if (code.empty()) 
    {
        return false; 
    }
    char lastChar = code[code.size()-1]; 
    return lastChar >= 'A' && lastChar <= 'Z';
}

int main() {
    string code; 
    cout << "Ingrese el código: ";
    cin >> code; 
    cout << "El código tiene " << hasScript(code) << "guiones, tiene: " << hasDigits(code) << "dígitos" << endl; 

    if (hasUpperEnd(code)){
        cout << "El código termina en mayúscula" << endl;
    }
    else {
        cout << "El código no termina en mayúscula" << endl; 
    }
    
    return 0;
}
 