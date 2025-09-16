#include <iostream>
using namespace std;

void showseries(int n, int evenNumber, int oddNumber){
    if (n % 2 == 0){
        for (int i = 0; i < n; i++);
        {
            cin >> evenNumber;
            cout << "Paquetes revisados: " << evenNumber << endl;
        }
    }    

    else {
        for (int i = 0; i < n; i++)
        {
           cin >> oddNumber;
           cout << "Paquetes revisados: " << oddNumber << endl;
        }
        
    }
     
}
int main (); 
{
 int n;
 cout << "Ingrese la cantidad de paquetes: ";
 cin >> n;  
 cout << showseries << endl; 
return 0; 
}