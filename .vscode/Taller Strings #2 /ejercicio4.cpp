#include <iostream>

using namespace std;

void forWithArrays() {
   float prices[6]= {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};

    float priceSum = 0.0;

   for (int i = 0; i < 6; i++) { 
    float price = prices[i];
    cout << price << endl;
   }


   float numbers [6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
 
 float maxPrice = 0;

 for (int i = 0; i < 7; i++) { 
    int number = numbers[i];
    if (number > maxPrice)
    {
        maxPrice= number;
    }
}
    cout << maxPrice << endl;
}

float numbers [6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
 
 float minPrice = 0;

 for (int i = 0; i < 7; i++) { 
    int number = numbers[i];
    if (number < minPrice)
    {
        minPrice= number;
    }
}
    cout << minPrice << endl;
}

int main() {

    forWithArrays(); 
    return 0; 
}

