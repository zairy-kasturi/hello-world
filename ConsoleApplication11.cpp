﻿// ConsoleApplication11.cpp : Defines the entry point for the console application.
//name  : mohamad zairi bin abd ghani
//matric number : B031910029
//FTMK

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int x, y;
	string name;
	cout << "plz enter your name" << endl;
	getline(cin, name);
	cout << "plz enter number of x" << endl;
	cin >> x;
	cout << "plz enter number of y"<< endl;
	cin >> y;


	cout << "This is your name : " << name << endl;
	
	if (x > 0 && y > 0)
		cout << "both number is positive " << endl;
	else if (x > 0)
		cout << "number of x is positive " << endl;
	else
		cout << "number of y is positive" << endl;

	
    return 0;
}

