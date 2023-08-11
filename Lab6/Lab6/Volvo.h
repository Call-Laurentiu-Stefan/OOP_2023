#pragma once
#include "Car.h"
#include <iostream>

class Volvo: public Car
{
public:
	Volvo();
	float getSpeed(Weather w);
	void printBrand();
	float getTime();
};

