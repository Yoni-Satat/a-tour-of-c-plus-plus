// HelloApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double square(double x) {
	return x * x;
}

void print_square(double x) {
	cout << "The square of "<<x<< " is " << square(x) << endl;
}

void some_function(double d, int i) {
	
	d = d + i;
	i = d * i;
	cout << "assigning a double to the result of adding double to int will conclude as a double " << d << endl;
	cout << "assigning an int to the result of multipling double with int will conclude as an int " << i << endl;
}


int main()
{
	some_function(2.2, 5);
    return 0;
}

