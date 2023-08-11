#pragma once
#include "Expression.h"
class Neg:public Expression
{
	int val;
public:
	Neg(Expression* e1);
	~Neg();
	void print();
	int compute();
	int getValue();


};

