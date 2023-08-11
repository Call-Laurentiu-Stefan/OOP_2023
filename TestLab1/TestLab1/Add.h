#pragma once
#include "Expression.h"
#include <iostream>

class Add: public Expression
{
	int val1, val2;
public:
	Add();
	~Add();
	void print();
	int compute();
};

