// HelloApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool accept()
{
	cout << "Do you want to procced? (y or n)" << endl;
	char answer = 0;
	cin >> answer;
	if (answer == 'y')
	{
		cout << "OK, let's continue..." << endl;
	}
	else if (answer == 'n')
	{
		cout << "Press Entre to confirm "<< endl;
	}
	return false;
}

int main()
{
	accept();
    return 0;
}

