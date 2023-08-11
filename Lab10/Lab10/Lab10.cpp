// Lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <exception>
#include "Array.h"
using namespace std;

class exceptie1 : public exception
{
	virtual const char* what() const throw()
	{
		return "Maximum capacity reached";
	}
};



class exceptie2 : public exception
{
	virtual const char* what() const throw()
	{
		return "Index out of bounds";
	}
};

class exceptie3 : public exception
{
	virtual const char* what() const throw()
	{
		return "Capacity should be at least 1";
	}
};


int main()
{
	exceptie1 maxCap;
	exceptie2 indexOut;
	exceptie3 badCap;
	int capacity = 6;
	Array<int> List;
	try {
		if (capacity <= 0) {
			throw badCap;
		}
		List = Array<int>(capacity);
	}
	catch(exception& e) {
		cout << "Exception: " << e.what() << endl;
	}
	try {
		int index = 9;
		if(index < 0 || index >= List.GetCapacity()){
			throw indexOut;
		}
		List.Insert(index, 5);
	}
	catch (exception& e) {
		cout << "Exception: " << e.what() << endl;
	}
}
