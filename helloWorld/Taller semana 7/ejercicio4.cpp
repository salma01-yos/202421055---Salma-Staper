#include<iostream>

using namespace std;
int number;

int contarDescendente (int number)
{
    int i = number; 
    cout << "Ingrese un número" << endl;
    cin >> number;
     while (i <= number ); 
     {
     
     cout << i; 
     
    }
}
int contarAscendente (int number,int i)
{
    cout << "Ingrese un número" << endl;
    cin >> number;

     while (i >= number);
     {
        i= number*number; 
        cout << i; 
     }

     
     return 0;
}
int main () {
    int number, mode;
    cout << "Ingrese un número" << endl;
    cin >> number; 
    cout << "Quiere los números en forma ascendente opción 1 o descendente opción 2" << endl;
    cin >> mode; 
    if (mode = 1){
        cout << contarAscendente << endl;
    }
    else{
        cout << contarDescendente << endl; 
    }
    return 0; 
}