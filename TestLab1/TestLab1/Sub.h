#pragma once
#include "Expression.h"
#include "Value.h"
#include <iostream>

class Sub:public Expression
{
	int val1, val2;
public:
	Sub(Expression* v1, Expression* v2);
	~Sub();
	void print();
	int compute();
	int getValue();

};

