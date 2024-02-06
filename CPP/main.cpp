#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//workin with multiple functions part 2

int calc(int calc1, int calc2, int calc3, int calc4){
    cout << calc1+calc2+calc3+calc4 << endl;
    cout << calc1-calc2-calc3-calc4 << endl;
    cout << calc1*calc2*calc3*calc4 << endl;
    cout << calc1/calc2/calc3/calc4 << endl;
    return 0;
}


int main() {
    int out1;
    cin>>out1;
    int out2;
    cin>>out2;
    int out3;
    cin>>out3;
    int out4;
    cin>>out4;

    calc(out1, out2, out3, out4);
    return 0;
 }
