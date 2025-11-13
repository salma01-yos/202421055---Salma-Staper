#include<iostream>

using namespace std;

class IntOfArrayManager {
    public:
        bool continueRunning = true;
        int size = 0;
        // Precios de los productos
        int* prices;
        // Nombres de los productos
        string* titles;

    int getUserAction() {
        int userAction;
        cout << "-----------------------------" << endl;
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
        cout << "-----------------------------" << endl;
        return userAction;
    }   
    
    string* getNewSales() {
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

    int* getNewPrices() {
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
    void modifySales() {
        int positionToModify;
        printSales();
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
        printSales();                                      
    }


    void printSales() {
        cout << "Lista actual" << endl;
        cout << "-----------------------------" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Posicion " << i + 1 << " -> Valor actual: " << prices[i] << endl;
        }
    }

    void findSale() {
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

    void salesInRange () {
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

    void calculeTotal() {
        
        int total = 0;
        for (int i = 0; i < size; i++) {
            total == prices[i];
        }
        cout << "El total de ventas registradas es: $" << total << endl; 
    }

    void run() {
        while (continueRunning)
        {
            int userAction = getUserAction();
            // Reestablecer
            if(userAction == 1) {
                int newArraySize;
                cout << "Ingrese el tamaño que quiere que tenga la lista: ";
                cin >> newArraySize;
                size = newArraySize;
                prices = getNewPrices();
            // Imprimir
            } else if (userAction == 2){
                printSales();
            // Modificar
            } else if (userAction == 3) {
                printSales();
                modifySales();
            }

            else if (userAction == 4) {
                printSales(); 
                findSale(); 
            }
            else if (userAction == 5) {
                printSales(); 
                salesInRange(); 
            }
            else if (userAction == 6) {
                calculeTotal();
                
            }
            // Rango de precios
            // Salir    
            else if (userAction == 7) {
                delete[] titles;
                delete[] prices;
                continueRunning = false;
            }
        }
    }    
};  

int main() {
    IntOfArrayManager arrayManager;
    arrayManager.run();
    return 0;
}