#include <iostream>

using namespace std;

void forWithArrays() {
   float grades[5]= {3.5, 4.0, 2.8, 3.9, 4.2};

    float gradeSum = 0.0;

   for (int i = 0; i < 5; i++) { 
    float grade = grades[i];
    cout << grade << endl;

    gradeSum = gradeSum + grade; 
   }

   float gradeAverage= gradeSum / 5;
}   
int main() {
   forWithArrays();
   return 0;
}