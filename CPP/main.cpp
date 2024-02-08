#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//the understanding of IF function part 2
int main() {
    cout << "Hou je van pasta?" << endl;
    string val1;
    getline(cin, val1);

    cout << "Hou je van sushi?" << endl;
    string val2;
    getline(cin, val2);

    if (val1 == "ja" && val2 == "ja") {
        cout << "Je bent een Yakuza" << endl;
    } else if (val1 == "ja" && val2 != "ja") {
        cout << "Je bent een mafia gangster" << endl;
    } else if (val1 != "ja" && val2 == "ja") {
        cout << "Je bent een shadow ninja" << endl;
    } else {
        cout << "Je bent een zeikerd" << endl;
    }
return 0;
}
