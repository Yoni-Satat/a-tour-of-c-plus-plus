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


int main()
{
	print_square(10.1);
	print_square(1.5);
    return 0;
}

