#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//the understanding of IF function part 1
int main() {
    string val1 = "Ja";
    string val2 = "Nee";
    string val3 = "Misschien";
    
    if(val1 == "Nee"){
        cout << "Je hebt gelijk" << endl;
    } else if(val2 == "Ja"){
        cout << "Je hebt ongelijk" << endl;
    } else if(val3 == "nope"){
        cout << "Je hebt misschien gelijk" << endl;
    } else {
        cout << "Je hebt geen gelijk" << endl;
    }

return 0;
 }
