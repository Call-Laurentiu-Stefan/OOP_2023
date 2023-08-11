#pragma once
#include "Car.h"
#include <iostream>
class BMW: public Car
{
public:
	BMW();
	float getSpeed(Weather w);
	void printBrand();
	float getTime();
};

