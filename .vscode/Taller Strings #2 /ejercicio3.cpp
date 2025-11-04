#include <iostream>

using namespace std;

float forWithArrays() {
   int ages[6]= {18, 21, 25, 30, 27, 22};

    int ageSum = 0;

   for (int i = 0; i < 6; i++) { 
    int age = ages[i];
    cout << age << endl;

    ageSum = ageSum + age; 
   }

   float ageAverage= ageSum / 6.0;
   return ageAverage;
}
int main() {
    cout << "18, 21, 25, 30, 27, 22" "y su promedio es " << endl;
    forWithArrays();
   return 0;
}