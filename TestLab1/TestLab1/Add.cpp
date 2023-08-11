#include "Add.h"

Add::Add()
{
}

void Add::print()
{
	cout << val1 << "+" << val2;
}

int Add::compute()
{
	return (val1 + val2);
}
