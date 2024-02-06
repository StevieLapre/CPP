#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//workin with multiple functions part 1
int food(){

    string food[4]={};
    food[0] = "Pizza";
    food[1] = "Burger";
    food[2] = "Pasta";
    food[3] = "Taco's";

    int pr_food[4] = {};
    pr_food[0] = 1;
    pr_food[1] = 2;
    pr_food[2] = 3;
    pr_food[3] = 4;
    
    cout << pr_food[0]+pr_food[1]+pr_food[2]+pr_food[3] << endl;

    return 0;
}

int main() {
    cout << "De totale proties die aangeboden kunnen worden zijn:" << endl;
    food();
    return 0;
 }
