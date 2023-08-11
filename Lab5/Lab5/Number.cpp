#include "Number.h"

Number::Number(const char* value, int base)
{
	strcpy(this->value, value);
	this->base = base;
	number = strtol(value, nullptr, base);
}

Number::Number(int n)
{
	number = n;
	base = 10;
	_itoa(n, value, base);
}

Number::Number(const char* value)
{
	base = 10;
	number = strtol(value, nullptr, base);
	strcpy(this->value, value);
}

Number::Number(const Number& n)
{
	this->number = n.number;
	strcpy(this->value, n.value);
	this->base = n.base;
}

Number::Number(const Number&& n)
{
	strcpy(value, n.value);
	number = n.number;
	base = n.base;
	delete &n;
}

Number::~Number()
{
}

char Number::operator[](int i)
{
	return value[i];
}

bool Number::operator>(const Number& n)
{
	if (this->number > n.number) {
		return true;
	}
	return false;
}

void Number::operator+=(const Number& n)
{
	*this = *this + n;
}

Number Number::operator=(const char* value)
{
	strcpy(this->value, value);
	number = strtol(value, nullptr, base);
	return (*this);
}

Number Number::operator=(int n)
{
	number = n;
	_itoa(n, value, base);
	return (*this);
}

Number Number::operator--()
{
	char* ps;
	for (ps = value; *ps != '\0'; ps++) {
		*ps = *(ps + 1);
	}
	*ps = '\0';
	number = strtol(value, nullptr, base);
	return (*this);
}

Number Number::operator--(int val)
{
	value[strlen(value) - 1] = '\0';
	number = strtol(value, nullptr, base);
	return (*this);
}



void Number::SwitchBase(int newBase)
{
	number = strtol(value, nullptr, base);
	char buffer[sizeof(value)];
	_itoa(number, buffer, newBase);
	std::strcpy(value, buffer);
	base = newBase;
}

void Number::Print()
{
	std::cout << value << std::endl;
}

int Number::GetDigitsCount()
{
	return strlen(value);
}

int Number::GetBase()
{
	return base;
}

Number operator+(const Number& n, const Number& m)
{
	char buffer[100];
	long int nb = n.number + m.number;
	if (n.base > m.base) {

		_itoa(nb, buffer, n.base);
		Number res(buffer, n.base);
		return res;
	}
	else {
		_itoa(nb, buffer, m.base);
		Number res(buffer, m.base);
		return res;
	}
}

Number operator-(const Number& n, const Number& m)
{
	char buffer[100];
	long int nb = n.number - m.number;
	if (n.base > m.base) {

		_itoa(nb, buffer, n.base);
		Number res(buffer, n.base);
		return res;
	}
	else {
		_itoa(nb, buffer, m.base);
		Number res(buffer, m.base);
		return res;
	}
}

