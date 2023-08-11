#include "Header.h"

B::B()
{
	std::cout << "\nConstructor B";
	x = 10;
}

B::~B() {
	std::cout << "\nDestructor B";
}

int B::getX() {
	std::cout << "\nB->X: ";
	return x;
}

void B::calcul()
{
	std::cout << "\nCalcul B";
	x += 5;
}

D::D()
{
	std::cout << "\nConstructor D";
	x = -1;
}

D::~D() {
	std::cout << "\nDestructor D";

}

int D::getX() {
	std::cout << "\nD->X: ";
	return x;
}

void D::calcul()
{
	std::cout << "\nCalcul D";
	x *= 2;
}

E::E()
{
	std::cout << "\nConstructor E";
	x = 20;
}

E::~E() {
	std::cout << "\nDestructor E";
}

int E::getX() {
	std::cout << "\nE->X: ";
	return x;
}

void E::calcul()
{
	std::cout << "\nCalcul E";
	x *= 5;
}