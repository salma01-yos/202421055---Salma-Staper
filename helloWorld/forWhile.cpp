#include<iostream>

using namespace std;

int main () {
    // int i=0
    // i<10 hasta que se deje 
   int userNumber;
   int i; 

   cout << "Ingrese un numero: ";
   cin >> userNumber;

   for (i = 0; i <= 10; i++)
   {
        int multiplicationResult = userNumber * i;
        cout << userNumber << " * " << i << " = " << endl;
   }
   

    
    return 0;
}
