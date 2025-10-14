#include <iostream>
using namespace std;
void turn (int beginTurn, int endTurn, int resultTurn);
{
    while (beginTurn < endTurn)
    {
       for ( i = 0; i < endTurn; i++)
       {
         cin >> resultTurn; 
         cout << "La máquina trabajó en los turnos: " << resultTurn << endl; 
       }
       
    }
    while (beginTurn > endTurn)
    {
        cout << "Error: el turno inicial no puede ser mayor que el final"
    }  
}
int main () {
    int beginTurn, endTurn;
    cout << "Ingrese el turno inicial de la máquina" << endl;
    cin >> beginTurn;
    cout << "Ingrese el turno final de la máquina" << endl; 
    turn;
}