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

        
                switch (selectedOperation) 
     
            {
                case 1:
                sumResult = inputValue1 + inputValue2;
                cout << "El resultado de la suma de los números" << inputValue1 << " + " << inputValue2 << " = " << sumResult << endl;
                break;
            

           
                case 2:
                subResult = inputValue1 - inputValue2;
                cout << "El resultado de la resta de los números" << inputValue1 << " + " << inputValue2 << " = " << subResult << endl;
                break; 
           

           
                
                case 3:
                multiplyResult = inputValue1 * inputValue2;
                cout << "El resultado de la multiplicación de los números" << inputValue1 << " * " << inputValue2 << " = " << multiplyResult << endl;
             
                break; 
           

           

                case 4:
                divisionResult = inputValue1 / inputValue2;
                cout << "El resultado de la división de los números" << inputValue1 << " / " << inputValue2 << " = " << divisionResult << endl;
            
                break; 
           

           

                case 5:
                moduleResult = inputValue1 % inputValue2;
                cout << "El resultado de el módulo de los números" << inputValue1 << " % " << inputValue2 << " = " << moduleResult << endl;
            
                break;

                default: 
               cout << "La opción seleccionada no existe" << endl; 

            }
      
}
                    
                    
                     
                
