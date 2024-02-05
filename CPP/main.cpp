#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 

using namespace std;

//practice assignment block 1
int main()
{
    cout << "Hoi, waar heb je zin in om vandaag te eten?:";
    string ant1;
    getline(cin,ant1);
    cout << "Hoeveel porties wil je hiervan?:";
    int ant2;
    cin >> ant2;
    cout << "Jou keuze voor het eten vandaag is "<< ant2 << " porties " << ant1 << endl;
    return 0;
}