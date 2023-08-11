#include "Sub.h"

Sub::Sub(Value& v1, Value& v2)
{
	val1 = v1.getVal();
	val2 = v2.getVal();
}

Sub::~Sub()
{
	val1 = 0;
	val2 = 0;
}

void Sub::print()
{
	cout << val1 << "-" << val2;
}

int Sub::compute()
{
	return (val1-val2);
}
