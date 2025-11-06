#include <iostream>
#include <string>
using namespace std;

int main() {

    string cities[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira",
                           "Bucaramanga", "Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperatures[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

    float tempMin, tempMax;
    cout << "Ingrese una temperatura mínima: ";
    cin >> tempMin;
    cout << "Ingrese una temperatura máxima: ";
    cin >> tempMax;

    cout << "Ciudades que están dentro del rango ingresado son: (" << tempMin << " - " << tempMax << " °C):" << endl;

    float sum = 0;
    int counter = 0;

    for (int i = 0; i < 10; i++) {
        if (temperatures[i] >= tempMin && temperatures[i] <= tempMax) {
            cout << cities[i] << " - " << temperatures[i] << " °C" << endl;
            sum += temperatures[i];
            counter++;
        }
    }

    if (counter > 0) {
        float promedio = sum / counter;
        cout << "Promedio de temperaturas que están dentro del rango: " << promedio << " °C" << endl;
    } else {
        cout << "No hay ciudades dentro del rango especificado." << endl;
    }

    return 0;
}
