#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//storing more data part 2
int main()
{
    string voedsel[8] = {}; 
    voedsel[0] = "pizza";
    voedsel[1] = "friet";
    voedsel[2] = "pasta";
    voedsel[3] = "soep";
    cout << "Zet je maaltijd er handmatig bij: ";
    getline(cin, voedsel[4]);

    cout << "Je hebt de volgende maaltijden in je lijst: " << endl;

    //eigen kennis voor listing items from array
    for (int i = 0; i < 8; i++)
    {
        cout << voedsel[i] << endl;
    }
    return 0;
}