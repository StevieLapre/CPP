#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//creating a coffee selector
int main() {

    double KP = 1.50;

    cout << "Heeft u zin in koffie?" << endl;
    string ant1;
    getline(cin, ant1);

    cout << "Geef uw balans op: "<< endl;
    double bal1;
    cin>>bal1;

    if (ant1 == "ja" && bal1 >= KP) {
        cout << "U kunt koffie kopen." << endl;
        cout << "Uw nieuwe balans is: " << bal1-KP << " euro." << endl;
    } else if (ant1 == "ja" && bal1 < KP) {
        cout << "U heeft onvoldoende saldo." << endl;
        cout << bal1-KP << " euro te kort." << endl;
    } else {
        cout << "We wensen U een fijne dag verder." << endl;
    }
    
    
return 0;
}
