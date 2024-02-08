#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//understanding loops part 2
int main() {

cout << "Geef een wachtwoord op: ";
string ww;
getline(cin, ww);

cout << "Geef het wachtwoord nogmaals op: ";
string ww2;
getline(cin, ww2);

while (ww != ww2) {
    cout << "De wachtwoorden komen niet overeen, probeer het opnieuw: ";
    getline(cin, ww2);
}   cout << "U bent succesvol ingelogd!" << endl;

//while loop
int i = 0;

return 0;
}
