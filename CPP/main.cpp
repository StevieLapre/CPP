#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//Final Project part 2
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

    while (naam2 != naam && wachtwoord2 != wachtwoord) {
        cout << "Je gegevens zijn niet correct, probeer het opnieuw" << endl;
        cout << "Naam: " << endl;
        getline(cin, naam2);
        cout << "Wachtwoord: " << endl;
        getline(cin, wachtwoord2);
    }
    cout << "Je bent ingelogd!" << endl;
    double saldo = 5.00;
    cout << "Je huidige saldo is: " << saldo << " euro" << endl;
    cout << "Wil je geld opnemen of storten? Y or N?" << endl;
    string vraag1;
    getline(cin, vraag1);
    if (vraag1 == "y" || vraag1 == "Y") {
        cout << "Hoeveel wil je opnemen of storten?: " << endl;
        double bedrag;
        cin >> bedrag;
        cout << "Je huidige saldo is: " << saldo+bedrag << " euro" << endl;
    } else {
        cout << "Bedankt voor het gebruiken van de applicatie" << endl;
    }

    cout << "Geef uw keuze op wat u wilt bestellen: " << endl;

return 0;
}
