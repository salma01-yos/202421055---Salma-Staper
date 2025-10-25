#include <iostream>
using namespace std;

int mayor(int firstNumber, int secondNumber);
{
    if (firstNumber > secondNumber)
   { 
    cout << "El mayor es: " << firtsNumber << endl;
   }
   else 
   {
    cout << "El mayor es: " << secondNumber << endl;
   }
}
int main () {
    int firstNumber, secondNumber;
    cout << "Ingrese el primer número a comparar" << endl;
    cin >> firstNumber;
    cout << "Ingrese el segundo número a comparar" << end;
    cin >> secondNumber;
    cout << mayor << endl; 
    return 0; 
}