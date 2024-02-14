#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//Final Project part 4
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

    while (naam2 != naam || wachtwoord2 != wachtwoord) {
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
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Je huidige saldo is: " << saldo+bedrag << " euro" << endl;
    } else {
        cout << "Bedankt voor het gebruiken van de applicatie" << endl;
    }

    cout << "Wilt u iets bestellen?" << endl;
    string vraag2;
    getline(cin, vraag2);
    if(vraag2 == "y" || vraag2 == "Y") {
        cout << "Wat wilt u bestellen?" << endl;
        string bestelling[]={"Friet", "Sushi", "Pizza"};
        double prijs[] = {2.50, 5.00, 7.50};

        cout<<"1. "<<bestelling[0]<<":"<<prijs[0]<<" euro"<<endl;
        cout<<"2. "<<bestelling[1]<<":"<<prijs[1]<<" euro"<<endl;
        cout<<"3. "<<bestelling[2]<<":"<<prijs[2]<<" euro"<<endl;

        cout << "Maak een keuze: " << endl;
        int vraag3;
        cin>>vraag3;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (vraag3 == 1) {
            cout << "Je hebt gekozen voor: " << bestelling[0] << endl;
            cout << "Je huidige saldo is: " << saldo-prijs[0] << " euro" << endl;
        } else if (vraag3 == 2) {
            cout << "Je hebt gekozen voor: " << bestelling[1] << endl;
            cout << "Je huidige saldo is: " << saldo-prijs[1] << " euro" << endl;
        } else if (vraag3 == 3) {
            cout << "Je hebt gekozen voor: " << bestelling[2] << endl;
            cout << "Je huidige saldo is: " << saldo-prijs[2] << " euro" << endl;
        } else {
            cout << "Ongeldige keuze" << endl;
        }
        
    } else {
        cout << "Bedankt voor het gebruiken van de applicatie" << endl;
    }

return 0;
}
