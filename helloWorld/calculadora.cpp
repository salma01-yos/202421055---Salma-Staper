#include<iostream>

using namespace std;

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

    //Suma
    if (selectedOperation == 1)
    {
        sumResult = inputValue1 + inputValue2;
        cout << "El resultado de la suma es: " << sumResult << endl;

    }
    else if (selectedOperation == 2)
    {
        subResult = inputValue1 - inputValue2;
        cout << "El resultado de la resta es: " << subResult << endl;

    }
    else if (selectedOperation == 3)
    {
        multiplyResult = inputValue1 * inputValue2;
        cout << "El resultado de la multiplicación es: " << multiplyResult << endl;

    }
    else if (selectedOperation == 4)
    {
        divisionResult = inputValue1 / inputValue2;
        cout << "El resultado de la division es: " << divisionResult << endl;

    }
    else if (selectedOperation == 5)
    {
        moduleResult = inputValue1 % inputValue2;
        cout << "El resultado de el módulo es: " << moduleResult << endl;

    }
}