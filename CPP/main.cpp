#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 
#include <vector> 

using namespace std;

//understanding various C++ operators
int main() {
    //comapring operators
   a == b : //a is equal to b
   a != b : //a is not equal to b
   a > b : //a is greater than b
   a < b : //a is smaller than b
   a>= b : //a is greater than or equal to b
   a<= b : //a is smaller than or equal to b

    //logical operators
    a == b && a<5 : //return true if the two conditions are met
    a<b || a<c : //return true if at least one of the conditions is met
    !(a<b) : //return false if the result is 'true' and true if the result is 'false'


    //arithmetic operators
    a+b : //addition
    a-b : //subtraction
    a*b : //multiplication
    a/b : //division
    a%b : //modulus
    a++ : //increment
    a-- : //decrement
    
    //assignment operators
    a = b : //assigns the value of b to a
    a += b : //adds the value of b to a
    a -= b : //subtracts the value of b from a
    a *= b : //multiplies the value of a by b
    a /= b : //divides the value of a by b
    a %= b : //assigns the remainder of a divided by b to a
    a &= b : //assigns a to a & b
    a |= b : //assigns a to a | b
    a ^= b : //assigns a to a ^ b
    a >>= b : //assigns a to a >> b
    a <<= b : //assigns a to a << b
    
    //bitwise operators
    a & b : //bitwise AND
    a | b : //bitwise OR
    a ^ b : //bitwise XOR
    ~a : //bitwise NOT
    a << b : //bitwise left shift
    a >> b : //bitwise right shift
    
    //conditional operators
    a > b ? a : b : //if a is greater than b, return a, else return b
    a < b ? a : b : //if a is smaller than b, return a, else return b
    
    //sizeof operator
    sizeof(int) : //returns the size of an integer
    sizeof(a) : //returns the size of the variable a
    sizeof a : //returns the size of the variable a

    //comma operator
    a, b : //evaluates a and b and returns the value of b
    a, b, c : //evaluates a, b and c and returns the value of c

    return 0;
 }
