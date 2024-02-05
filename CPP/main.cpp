#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 

using namespace std;

//building a basic food ordering app
int main()
{
  cout << "Welkom bij de voedsel order app!" << endl;
  cout << "Wat zou je willen bestellen?: " << endl;
  string best1;
  getline(cin, best1);
  cout << "Wat zou je erbij willen drinken?: " << endl;
  string best2;
  getline(cin, best2);      
    cout << "wat is de totale prijs van je " << best1 << "?" << endl;
    double price1;
    cin >> price1;
    cout << "wat is de totale prijs van je " << best2 << "?" << endl;
    double price2;
    cin >> price2;
    cout << "Je hebt besteld: " << best1 << " en " << best2 << ". De totale prijs van je bestelling is: " << price1 + price2 << ",- euro" << endl;
}