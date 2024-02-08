#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//generating different colors with a switch statement
string kleur(int kleur){
    string color;

    switch(kleur){
        case 1:
            color = "rood";
            break;
        case 2:
            color = "blauw";
            break;
        case 3:
            color = "groen";
            break;
        case 4:
            color = "geel";
            break;
        case 5:
            color = "paars";
            break;
        case 6:
            color = "oranje";
            break;
        case 7:
            color = "zwart";
            break;
        case 8:
            color = "wit";
            break;
        default:
            color = "kleur onbekend";
            break;
    }
    return color;
}

int main() {
    cout << kleur(10) << endl;
return 0;
}
