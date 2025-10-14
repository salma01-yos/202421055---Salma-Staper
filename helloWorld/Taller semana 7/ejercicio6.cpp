#include <iostream>
using namespace std;
int mayor(int a, int b, int c){
    int mayor;
    if (a >= b && a >=c){
        mayor = a;
    }
    else if (b >= a && b >= c){
        mayor = b;
    }
    else {
        mayor = c;
    }
    return mayor;

}
int mayorsecond(int a, int b, int c){
    if (a<b && c<b)
    cout << "el segundo número es el mayor" << endl; 
}
int main (){
    int a, b, c;

    cout << "Ingrese el primer número" << endl;
    cin >> a;
    cout << "Ingrese el segundo número" << endl;
    cin >> b;
    cout << "Ingrese el tercer número" << endl;
    int result = mayorsecond(a, b, c,);
    cout << "El número mayor de los tres números ingresados es: " << result << endl;
    return 0;
}