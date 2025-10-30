#include <iostream>

using namespace std;

void forWithArrays () {


 int numbers [6] = {8, 12, 5, 20, 7, 15};
 
 int maxNumber = 0;

 for (int i = 0; i < 7; i++) { 
    int number = numbers[i];
    if (number > maxNumber)
    {
        maxNumber = number;
    }
}
    cout << maxNumber << endl;
}

int main() {

    forWithArrays(); 
    return 0; 
}





