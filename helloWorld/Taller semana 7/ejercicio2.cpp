#include<iostream>

using namespace std;

int clasificarNumero(int number) 
{
    cout << "Ingrese un número entero" << endl;
    cin >> number; 
 if (number>0)
    {
       cout << "Positivo" << endl; 
    }

    else if (number<0)
     {
        cout << "Negativo" << endl; 
     }

  else (number == 0);
     {
        cout << "Cero";
     }

cout << clasificarNumero << endl; 
    return 0;
}
