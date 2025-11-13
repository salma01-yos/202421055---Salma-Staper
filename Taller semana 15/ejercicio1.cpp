#include <iostream>

using namespace std;

void printSales(string titles[],int prices[], int size) {
     cout << "Lista de actual de ventas" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Posicion " << i + 1 << " - Ventas:  " << titles[i]<< " - Valor: $"<< prices[i] << endl;
    }
}

string* getNewSales(int size) {
    string* sales = new string[size];
    for (int i = 0; i < size; i++)
    {
        string newSale;
        cout << "Ingrese el nombre de la venta para la posicion " << i + 1 << ": ";
        cin >> newSale;
        sales[i] = newSale;

    }
    return sales;
}

int* getNewPrices(int size) {
    int* price= new int[size];
    for (int i = 0; i < size; i++)
    {
        int newPrice;
        cout << "Ingrese el valor de esta venta en la posición" << i +  1<< ": " << endl; 
        cin >> newPrice; 
        price[i] = newPrice;

    }
    return price;
}

void modifySales(string titles[], int size, int prices[]) {
    
   int positionToModify;
   printSales(titles, prices, size);
     cout << "Ingrese la posición de la venta que desea modificar (1-" << size << "): " << endl;
    cin >> positionToModify;
    positionToModify= positionToModify - 1;
    string newSale;
    int newPrice;
    cout << "Ingrese el nuevo nombre de la venta a modificar: " << endl;
    cin >> newSale;
    cout << "Ingrese el nuevo valor de la venta a modificar: " << endl;
    cin >> newPrice;
    titles[positionToModify] = newSale;
    prices[positionToModify] = newPrice;
    printSales(titles, prices, size);                                      
}

void findSale(string titles[], int size, int prices[]) {
    string userSale;
    cout << "Ingrese el nombre de la venta que desea buscar: " << endl;
    cin >> userSale;
    for ( int i = 0; i < size; i++) {
        if (titles[i] == userSale) {
            cout << "La venta que busca es: " << titles[i] << " con un valor de: " << prices[i] << endl;
            break;
        }
        }
}

void salesInRange (string titles[], int size, int prices[]) {
    int priceMin, priceMax;
    cout << "Ingrese el valor mínimo de una venta" << endl;
    cin >> priceMin;
    cout << "Ingrese el valor máximo de una venta" << endl;
    cin >> priceMax; 
    cout << "Las ventas que se encuentran entre los valores:  " << priceMin << " - " << priceMax << "son :" << endl;
    
    for (int i = 0; i < size; i++)
    {
       if (prices[i] >= priceMin && prices[i] <= priceMax){
        cout << "La venta '" << titles[i] << "' está dentro de este rango de precios: " << prices[i] << endl;
       } 
    }
}


void calculeTotal(int size, int prices[]) {
    
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    cout << "El total de ventas registradas es: $" << total << endl; 
}
      
int getUserAction() {
    int userAction; 
    cout << "-------------------------------------------------------" << endl;
    cout << "Por favor seleccione: " << endl;
    cout << "1. Registrar o reiniciar ventas." << endl;
    cout << "2. Mostrar todas las ventas." << endl;
    cout << "3. Modificar una venta." << endl;
    cout << "4. Buscar una venta." << endl;
    cout << "5. Mostrar ventas dentro de un rango de precios." << endl;
    cout << "6. Calcular total de ventas." << endl;
    cout << "7. Salir." << endl;
    cout << "Ingrese una opción: " << endl;
    cin >> userAction; 
    cout << "-------------------------------------------" << endl;
    return userAction; 
}

void run () {
    int size = 0;
    string* titles = getNewSales(size);
    int* prices = getNewPrices(size);
    bool continueRunning = true;
    while (continueRunning) {
         int userAction = getUserAction(); 
    switch (userAction)
    {
    case 1:
        cout << "Ingrese el tamaño de la lista: " ;
        cin >> size;
        titles = getNewSales(size);
        prices = getNewPrices(size);
        break;

    case 2:
        printSales(titles, prices, size);
        break;

    case 3: 
        modifySales(titles, size, prices);
        break;

    case 4:
        findSale(titles, size, prices);
        break; 

    case 5:
        salesInRange(titles, size, prices);
        break;

    case 6:
        calculeTotal(size, prices);
        break; 

    case 7:
        delete[] titles;
        delete[] prices;
        continueRunning = false;
        break;
    default:
        cout << "Opción no existente. Intente de nuevo." << endl;
        break;
    }

}
}

int main() {
    run();
    return 0;
}


