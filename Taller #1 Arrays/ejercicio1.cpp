#include <iostream>

using namespace std;

void forWithArrays() {
    string textArray[4] = {"Ana", "Luis", "Maria", "Pedro"};
    cout << textArray[0] << endl;
    cout << textArray[1] << endl;
    cout << textArray[2] << endl;
    cout << textArray[3] << endl;

    for (int i = 0; i < 4; i++) { 

        string arrayValue= textArray[i];
        cout << "El nombre del empleado que está en el puesto " << i << " es: " << arrayValue << endl;
    } 
 } 

 int main() {
    forWithArrays();
    return 0;
 }

