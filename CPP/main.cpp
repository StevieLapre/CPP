#include <iostream>

using namespace std;

//text and functions
int main()
{
    string nummer1 = "Een simpele zin";
double grootte1 = nummer1.size();
int vind1 = nummer1.find("zin", 0);
nummer1[0]='g';
nummer1.clear();

cout << nummer1 << endl;

    return 0;
}
