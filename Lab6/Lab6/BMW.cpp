#include "BMW.h"

BMW::BMW()
{
	fCapacity = 48.0f;
	fConsumption = 13.3f;
	speed = 0.0f;
	time = -1.0f;
}

float BMW::getSpeed(Weather w)
{
	switch (w)
	{
	case Weather::Rain:
		speed = 35.6f;
		return speed;
	case Weather::Sunny:
		speed = 45.1f;
		return speed;
	case Weather::Snow:
		speed = 32.8f;
		return speed;
	default:
		return speed;
	}
}

void BMW::printBrand()
{
	std::cout << "BMW: ";
}

float BMW::getTime()
{
	return time;
}
