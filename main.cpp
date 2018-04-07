#include <iostream>
#include <cmath>
#include "mymath.h"

using namespace std;

int main()
{
int n;
cout << "Give the number for which you want to find a factorial of"<< endl;
cin >> n;//number to find factorial
cout << "factorial of " << n << " equals " << n<< factorial(n) << endl;

float a,b;
cout << "Give the length of two sides of a triangle"<< endl;
cin >> a >>  b;//two sides of a triangle
cout << "pythagoras from " << a << " and " << b << " equals " << pythagoreanTheorem (a,b) << endl;

float c;
cout << "Give the numbers for finding delta" << endl;
cin >> a >> b >> c;//f(x)=ax^2+bx+c
cout << "The delta of " << a <<","<<b <<" equals " << delta (a,b,c) << endl;

cout << "give the number for the tribo//numbernacci sequence" << endl;
cin >> n;//number for the sequence
cout << "the sequence for " << n << " equals " <<tribonacciSequence(n) << endl;


int p;
cout << "give the base and the power" << endl;
cin >> b >> p;//base with it's power
cout << "the Power of " << b <<"^" << p <<" equals " << Power(b,p) << endl;





    return 0;
}
