#pragma once
class Expression {

public:
	Expression* exp[20];
	int n;
	virtual int getValue() = 0;
	virtual void print() = 0;
	virtual int compute() = 0;
	virtual ~Expression();
};