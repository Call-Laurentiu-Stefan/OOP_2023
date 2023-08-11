#pragma once
#include "Car.h"
#include <iostream>

class RangeRover: public Car
{
public:
	RangeRover();
	float getSpeed(Weather w);
	void printBrand();
	float getTime();
};

