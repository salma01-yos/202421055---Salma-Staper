#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Ingresa un número: ";
    cin >> number;

    int count=0; 
    string word; 
    cout << "Ingresa palabras (termina con 'fin'):" << endl;
    while (true) {
        cin >> word;
        if (word =="fin"){ 
            break;
        }
        if (word.length() > number){
            count++; 
        }
    }

    cout << "Cantidad de palabras con longitud mayor a " << number << ": " << count << endl; 
    return 0;
}