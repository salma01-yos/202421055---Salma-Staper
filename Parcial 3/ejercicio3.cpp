#include <iostream>
#include <string>

using namespace std;

int main() {

string plate[6]= {"ABC123", "XYZ789", "LMN456", "LMN456", "QWE654", "TYU999"};
float fines[6]= {250000, 180000, 300000, 450000, 200000, 120000};
string cities[6]= {"Tunja", "Bogotá", "Tunja", "Medellín", "Cali", "Tunja"};

string city;
float fineTotal=0; 
bool hasFines = false;

cout << "Ingrese una cuidad" << endl;
cin >> city;

for (int i = 0; i< 6; i++){
    if (city == cities[i]){
        cout << plate[i] << " - $ " << fines[i] << endl;
       fineTotal += fines[i];
       fineTotal == hasFines;
       hasFines = true; 

    }

}

    cout << "Total de multas en " << city << " : $ " << fineTotal << endl; 


return 0;
}

