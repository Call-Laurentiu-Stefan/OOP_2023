#pragma once
#include "Weather.h"

class Car {
public:
	float fCapacity, fConsumption, time, speed;
	virtual float getSpeed(Weather w) = 0;
	virtual void printBrand() = 0;
	virtual float getTime() = 0;
};