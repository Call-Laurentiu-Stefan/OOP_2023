#pragma once
#include "Expression.h"
class Value:public Expression
{
	int val;
public:
	Value();
	Value(int x);
	~Value();
	void print();
	int compute();
	int getValue();

};

