#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

//practice assignment block 1
int main()
{
    string name = "Xavi";
    int food1 = 4;
    int food2 = 8;
    string oef1 = "gesport";
    int oef2 = 30;
    int food3 = 320;
    int cal1 = 560;
    
    cout <<"Hello " << name << endl;
    cout <<"Ik heb " << min(food1, food2) << " stukken pizza gegeten en ze kosten " << max(food1, food2) << " euro totaal." << endl;
    cout << "Ik heb " << oef1 << " voor " << min(oef2, food3) << " minuten en ik heb " << max(oef2, food3) << " calorieen verbrand." << endl;
    cout << "ik heb met dit totaal " << cal1-food3 << " calorieen ingenomen" << endl;
    return 0;
}