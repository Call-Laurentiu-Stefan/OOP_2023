#pragma once
#include <stdlib.h>
#include <iostream>
#include <cstdio>

class Number
{
	long int number;
	char value[100];
	int base;

public:

	Number(const char* value, int base); // where base is between 2 and 16
	Number(int n);
	Number(const char* value);
	Number(const Number& n);
	Number(const Number&& n);

	~Number();

	char operator[](int i);
	bool operator>(const Number& n);
	void operator+=(const Number& n);
	Number operator= (const char* value);
	Number operator= (int n);
	Number operator--();
	Number operator--(int val);
	friend Number operator+(const Number& n, const Number& m);
	friend Number operator-(const Number& n, const Number& m);
	

	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base
};

