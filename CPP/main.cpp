#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//Final Project part 5
int main() {

    //Login Applicatie
    cout <<"Welkom bij de applicatie" << endl;
    cout <<"Creeer een account" << endl;
    cout <<"Voer je naam in: ";
    string naam;
    getline(cin, naam);
    cout <<"Creeer een wachtwoord: ";
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

    //Saldo Applicatie
    double saldo = 5.00;
    cout << "Je huidige saldo is: " << saldo << " euro" << endl;
    cout << "Wil je geld storten? y or n?" << endl;
    string vraag1;
    getline(cin, vraag1);
    if (vraag1 == "y") {
        cout << "Hoeveel wil je storten?: " << endl;
        double bedrag;
        cin >> bedrag;
        cin.ignore();
        saldo += bedrag; //Saldo update
        cout << "Je huidige saldo is: " << saldo << " euro" << endl;
    } else {
        cout << "Je huidige saldo is: " << saldo << " euro" << endl;
    }

    //Bestelling Applicatie
    cout << "Wilt u iets bestellen? y of n?" << endl;
    string vraag2;
    getline(cin, vraag2);
    if(vraag2 == "y") {
        cout << "Wat wilt u bestellen?" << endl;
        string bestelling[]={"Friet", "Sushi", "Pizza"};
        double prijs[] = {2.50, 5.00, 7.50};

        cout<<"1. "<<bestelling[0]<<":"<<prijs[0]<<" euro"<<endl;
            cout<<"2. "<<bestelling[1]<<":"<<prijs[1]<<" euro"<<endl;
                cout<<"3. "<<bestelling[2]<<":"<<prijs[2]<<" euro"<<endl;

        cout << "Maak een keuze: " << endl;
        int vraag3;
        cin>>vraag3;
        cin.ignore();

        while(vraag3 < 1 || vraag3 > 3) {
            cout << "Ongeldige keuze, probeer het opnieuw" << endl;
            cout << "Maak een keuze: " << endl;
            cin>>vraag3;
        }
        
        if (vraag3 == 1) {
            cout << "Je hebt gekozen voor: " << bestelling[0] << endl;
            cout << "Je bestelling kost" << prijs[0] << " euro" << endl;
            saldo -= prijs[0];//Saldo update
            cout << "Je huidige saldo is: " << saldo << " euro" << endl;
        } else if (vraag3 == 2) {
            cout << "Je hebt gekozen voor: " << bestelling[1] << endl;
            cout << "Je bestelling kost" << prijs[1] << " euro" << endl;
            saldo -= prijs[1];//Saldo update
            cout << "Je huidige saldo is: " << saldo << " euro" << endl;
        } else if (vraag3 == 3) {
            cout << "Je hebt gekozen voor: " << bestelling[2] << endl;
            cout << "Je bestelling kost" << prijs[2] << " euro" << endl;
            saldo -= prijs[2];//Saldo update
            cout << "Je huidige saldo is: " << saldo << " euro" << endl;
        } 
        
    } else {
        cout << "Een fijne dag verder! Tot ziens!" << endl;
        } return 0;
    }
