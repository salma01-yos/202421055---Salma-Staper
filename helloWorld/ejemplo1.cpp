#include<iostream>

using namespace std;

void sumOfTwoValues (int inputValue1, int inputValue2); 
int sumResult;
sumResult = inputValue1 + inputValue2;
cout << "La suma de los valores es " << sumResult << endl;

void subsOfTwoValues (int inputValue1, int inputValue2);
int subResult;
subResult = inputValue1 - inputValue2;
cout << "La resta de los valores es " << subResult << endl;

int multOfTwoValues (int inputValue1, int inputValue2);
int multiplyResult;
multiplyResult= intValue1 * intValue2 ; 
return multiplyResult;

int divOfTwoValues (int inputValue1, int inputValue2);
int divisionResult;
divisionResult= inputValue1 / inputValue2;
return divisionResult;

int moduleOfTwoValues (int inputValue1, int inputValue2);


int main () {
    int inputValue1, inputValue2;
    int sumResult, subResult, multiplyResult, divisionResult, moduleResult;
    // 1= suma, 2= resta, 3= multiplicación, 4= división, 5=módulo;
    int selectedOperation; 

    cout << "Bienvenido" << endl;
    cout << "Ingrese el primer valor: ";
    cin >> inputValue1;
    cout << "Ingrese el segundo valor: ";
    cin >> inputValue2;

    cout << "Seleccione la operación matemática: 1= suma, 2= resta, 3= multiplicación, 4= división, 5= módulo";
    cin >> selectedOperation;