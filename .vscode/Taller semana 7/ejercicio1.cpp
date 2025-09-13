#include<iostream> 

using namespace std; 

int main ()
{
    int userAge;
    string userName;
    double userStature; 

    cout << "Ingrese su nombre" << endl;
    cin >> userName; 

    cout << "Ingrese su edad" << endl; 
    cin >> userAge; 

    cout << "Ingrese su estatura en metros" << endl; 
    cin >> userStature; 

    cout << "Hola " << userName << ", tienes " << userAge << " años y mides " << userStature << " metros " << endl;
    return 0; 
    
}