#include<iostream>

using namespace std;

double divideNumbers(int inputValue1, int inputValue2)

{
    double divisionNumbers = inputValue1/inputValue2; 

         if (divisionNumbers =! 0)
         {
              cout << "El resultado de su división es: " << divisionNumbers << endl; 
        }

         else (inputValue2== 0);
        {
            cout << "Error Error, verifique el divisor" << endl;
         }
        return divisionNumbers; 
}

int getMax (int inputValue1, int inputValue2)
{
   
    if (inputValue1 > inputValue2)

    {
        cout << inputValue1 << "es mayor que " << inputValue2 << endl;
    }

    else
    {
        cout << inputValue2 << "es mayor que " << inputValue1 << endl; 
    } 
}

int square (int inputValue1)  
{
   
    int numberResult; 
    numberResult = inputValue1 * inputValue1; 
    cout << "El cuadrado del número" << inputValue1 << "es: " << numberResult << endl; 

}

int main () 
{
    int inputValue1, inputValue2;
    int sumResult, subResult, multiplyResult, divisionResult, squareResult, largestResult; 
    // 1= suma, 2= resta, 3= multiplicación, 4= división, 5=módulo;
    int selectedOperation; 
    
    cout << "Ingrese el primer valor: ";
    cin >> inputValue1;
    cout << "Ingrese el segundo valor: ";
    cin >> inputValue2;

    cout << "Seleccione la operación matemática: 1= Suma; 2= Resta, 3= Multiplicación, 4= División, 5= Cudrado del número, 6= Número mayor";
    cin >> selectedOperation;

    if (selectedOperation == 1)
    {
        sumResult= inputValue1 + inputValue2; 
        cout << "El resultado de su suma es: " << sumResult << endl; 
    }
    else if (selectedOperation == 2)
    {
        subResult = inputValue1 - inputValue2;
        cout << "El resulado de la resta es: " << subResult << endl;
    }

    else if (selectedOperation == 3)
    {
        multiplyResult = inputValue1 * inputValue2;
        cout << "El resultado de la multiplicación es: " << multiplyResult << endl; 
    }
    
    else if (selectedOperation == 4)
    {
        cout << divideNumbers << endl; 
    }

    else if (selectedOperation == 5)
    { 
        cout << square << endl; 
    }

    else (selectedOperation == 6);
    {
        cout << getMax << endl; 
    }
 return 0;
}
