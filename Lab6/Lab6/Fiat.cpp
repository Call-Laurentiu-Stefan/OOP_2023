#include "Fiat.h"

Fiat::Fiat()
{
	fCapacity = 4;
	fConsumption = 5;
	speed = 0.0f;
	time = -1.0f;
}

float Fiat::getSpeed(Weather w)
{
	switch (w)
	{
	case Weather::Rain:
		speed = 28.1f;
		return speed;
	case Weather::Sunny:
		speed = 33.3f;
		return speed;
	case Weather::Snow:
		speed = 25.3f;
		return speed;
	default:
		return speed;
	}
}

void Fiat::printBrand()
{
	std::cout << "Fiat: ";
}

float Fiat::getTime()
{
	return time;
}
