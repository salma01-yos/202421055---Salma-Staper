#include <iostream>
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
 int hasPunctuationSigns (string code) {
     int counter = 0;
    for (int i = 0; i < code.size() ; i++)
    {
        char letter = code[i];
        if (letter == 44 && letter == 46 && letter == 58 && letter == 59 )
        {
            counter++;   
        }
        
    }
}
bool hasEndPoint (string phrase){
    if (phrase.empty()) {
        return false;
    }
    char lastChar = phrase[phrase.length() - 1];
    return lastChar == '.';
}
int main(){
    string phraseUser;
    cout << "Ingrese una frase" << endl;
    cin >> phraseUser; 
    cout << "El código tiene " << countWords(phraseUser) << "palabras y tiene " << hasPunctuationSigns(phraseUser) << "signnos de puntuación." << endl;

   if (hasEndPoint(phraseUser)){
        cout << "El código termina en un punto" << endl;
    }
    else {
        cout << "El código no termina en un punto" << endl; 
    }
    
    return 0;

}