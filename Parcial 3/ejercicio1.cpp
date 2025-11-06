#include <iostream>
#include <string>
using namespace std; 

int countWords (string phrase) {
    int count = 1; 
    if (phrase.empty()) {
        return 0; 
    }
    for (int i=0; i < phrase.length (); i++){
        if (phrase[i] == ' '){
            count++; 
        }
    }
    return count; 
}



int main() {
    string phraseUser;
    cout << "Ingrese una frase" << endl;
    getline(cin, phraseUser); 
    cout << "El código tiene " << countWords(phraseUser) << " palabras." << endl;
    return 0;
}