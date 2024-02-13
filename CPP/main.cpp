#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//Final Project part 1
int main() {
    
    cout <<"Welkom bij de applicatie" << endl;
    cout <<"Creeer een account" << endl;
    cout <<"Voer je naam in: ";
    string naam;
    getline(cin, naam);
    cout <<"creeer een wachtwoord: ";
    string wachtwoord;
    getline(cin, wachtwoord);

    cout << "Verifieer je gegevens aub!" << endl;
    cout << "Naam: " << endl;
    string naam2;
    getline(cin, naam2);

    cout << "Wachtwoord: " << endl;
    string wachtwoord2;
    getline(cin, wachtwoord2);

return 0;
}
