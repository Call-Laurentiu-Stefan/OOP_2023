#include "Complex.h"

Complex::Complex()
{
	real = 0;
	imaginar = 0;
}

Complex::Complex(int real, int imaginar): real(real), imaginar(imaginar) {}

Complex::~Complex()
{
}

ostream& operator<<(ostream& os, Complex& x)
{
	os << "Real: " << x.real << " Imaginar: " << x.imaginar << endl;
	return os;
}

Complex operator""_complex(const char* data, size_t dimensiune)
{
	const char* plus = strstr(data, "+");
	char m1[10], m2[10];
	strncpy(m1, data, plus - data);
	strncpy(m2, plus + 1, strlen(plus) - 2);
	return Complex(atoi(m1), atoi(m2));
}
