#pragma once
#include "Car.h"
#include <iostream>

class Fiat: public Car
{
public:
	Fiat();
	float getSpeed(Weather w);
	void printBrand();
	float getTime();
};

