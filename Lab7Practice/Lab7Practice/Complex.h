#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Complex
{
	int real, imaginar;
public:
	Complex();
	Complex(int real, int imaginar);
	~Complex();
	friend ostream& operator<<(ostream& os, Complex& x);
};

Complex operator""_complex(const char* data, size_t dimensiune);
