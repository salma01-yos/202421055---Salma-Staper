#include <iostream>

using namespace std;
int hasScripts (string s){
    int counterScript;
    for (int i = 0; i < s.size() ; i++){
        char letter =s[i];
        if (letter == 45)
        {
            counterScript++;   
        } 
    }
    return counterScript; 
}

int hasPoints (string s) {
    int counterPoints;
    for (int i = 0; i < s.size() ; i++) { 
        char letter =s[i];
        if (letter == 46)
        {
            counterPoints++;   
        } 
    }
    return counterPoints;
}

int main () {
    string sign;
    cout << "Ingrese la señal de radio: " << endl;
    cin >> sign;
    cout << "Las señales positivas son de " << hasScripts(sign) << " y las señales negativas son de " << hasPoints(sign) << endl;
} 