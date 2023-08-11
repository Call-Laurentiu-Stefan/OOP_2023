#include "Value.h"

Value::Value()
{
	val = 0;
}

Value::Value(int x)
{
	val = x;
	exp[n++] = this;
}

Value::~Value()
{
	val = 0;
}

void Value::print()
{
	cout <<val;
}

int Value::compute()
{
	return 0;
}

int Value::getVal()
{
	return val;
}
