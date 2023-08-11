#pragma once
#include "Car.h"
#include <iostream>

class Seat: public Car
{
public:
	Seat();
	float getSpeed(Weather w);
	void printBrand();
	float getTime();
};

