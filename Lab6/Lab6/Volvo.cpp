#include "Volvo.h"

Volvo::Volvo()
{
	fCapacity = 60.0f;
	fConsumption = 8.5f;
	speed = 0.0f;
	time = -1.0f;
}

float Volvo::getSpeed(Weather w)
{
	switch (w)
	{
	case Weather::Rain:
		speed = 30.2f;
		return speed;
	case Weather::Sunny:
		speed = 35.3f;
		return speed;
	case Weather::Snow:
		speed = 29.3f;
		return speed;
	default:
		return speed;
	}
}

void Volvo::printBrand()
{
	std::cout << "Volvo: ";
}

float Volvo::getTime()
{
	return time;
}
