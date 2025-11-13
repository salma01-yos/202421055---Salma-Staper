#include <iostream>
#include <string>
using namespace std;

class SalesSystem {
private:
    static const int MAX_SALES = 100; // Maximum number of sales
    string names[MAX_SALES];
    int values[MAX_SALES];
    int numSales;

public:
    // Constructor
    SalesSystem() {
        numSales = 0;
    }

    // 1️⃣ Register or restart sales
    void getNewSales() {
        cout << "Enter the number of sales to register: ";
        cin >> numSales;

        if (numSales <= 0 || numSales > MAX_SALES) {
            cout << "Invalid number of sales (max " << MAX_SALES << ").";
            numSales = 0;
            return;
        }

        for (int i = 0; i < numSales; i++) {
            cout << "Enter the name of sale #" << i + 1 << ": ";
            cin >> names[i]; // single word only
            cout << "Enter the value of sale #" << i + 1 << ": ";
            cin >> values[i];
        }

        cout << "Sales registered successfully.";
    }

    // 2️⃣ Show all sales
    void printSales() const {
        if (numSales == 0) {
            cout << "No sales registered.";
            return;
        }

        cout << "Current sales list:";
        cout << "-----------------------------";
        for (int i = 0; i < numSales; i++) {
            cout << "Sale: " << names[i] << " -> Value: " << values[i] << endl;
        }
    }

    // 3️⃣ Modify a sale value by name
    void modifySale() {
        if (numSales == 0) {
            cout << "No sales registered";
            return;
        }

        string name;
        cout << "Enter the name of the sale to modify: ";
        cin >> name;

        for (int i = 0; i < numSales; i++) 
        {
            if (names[i] == name) 
                cout << "Current value: " << values[i] << endl;";
                cout << "Enter the new value: ";
                cin >> values[i];
                cout << "Sale updated successfully.";
                return;
            }
        }
        cout << "Sale not found.\n";
    }
    

    // 4️⃣ Find a sale by name
    void findSale() const {
        if (numSales == 0) {
            cout << "No sales registered.\n";
            return;
        }

        string name;
        cout << "Enter the name of the sale to search: ";
        cin >> name;

        for (int i = 0; i < numSales; i++) {
            if (names[i] == name) {
                cout << "Sale found at position " << i + 1
                     << " -> Value: " << values[i] << "\n";
                return;
            }
        }

        cout << "Sale not found.\n";
    }

    // 5️⃣ Show sales within a price range
    void salesInRange() const {
        if (numSales == 0) {
            cout << "No sales registered.\n";
            return;
        }

        int minValue, maxValue;
        cout << "Enter the minimum value: ";
        cin >> minValue;
        cout << "Enter the maximum value: ";
        cin >> maxValue;

        cout << "Sales in the range [" << minValue << ", " << maxValue << "]:\n";
        cout << "-----------------------------\n";

        bool found = false;
        for (int i = 0; i < numSales; i++) {
            if (values[i] >= minValue && values[i] <= maxValue) {
                cout << "Sale: " << names[i] << " -> Value: " << values[i] << "\n";
                found = true;
            }
        }

        if (!found)
            cout << "No sales found in that range.\n";
    }

    // 6️⃣ Calculate total sales value
    void calculateTotal() const {
        if (numSales == 0) {
            cout << "No sales registered.\n";
            return;
        }

        int total = 0;
        for (int i = 0; i < numSales; i++)
            total += values[i];

        cout << "The total of all sales is: " << total << "\n";
    }
};

// Function that runs the program
void run() {
    SalesSystem system;
    int option;

    do {
        cout << "\n-----------------------------\n";
        cout << "Please select an option:\n";
        cout << "1. Register or restart sales.\n";
        cout << "2. Show all sales.\n";
        cout << "3. Modify a sale.\n";
        cout << "4. Find a sale.\n";
        cout << "5. Show sales within a price range.\n";
        cout << "6. Calculate total sales.\n";
        cout << "7. Exit.\n";
        cout << "Enter your choice: ";
        cin >> option;

        cout << "-----------------------------\n";

        switch (option) {
            case 1: system.getNewSales(); break;
            case 2: system.printSales(); break;
            case 3: system.modifySale(); break;
            case 4: system.findSale(); break;

            case 5: system.salesInRange(); break;
            case 6: system.calculateTotal(); break;
            case 7: cout << "Exiting program.\n"; break;
            default: cout << "Invalid option. Please try again.\n"; break;
        }   
    } while (option != 7);
}       
int main() {
    run();
    return 0;
}

