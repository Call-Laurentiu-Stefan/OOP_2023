#include "Seat.h"

Seat::Seat()
{
	fCapacity = 50.0f;
	fConsumption = 8.5f;
	speed = 0.0f;
	time = -1.0f;
}

float Seat::getSpeed(Weather w)
{
	switch (w)
	{
	case Weather::Rain:
		speed = 34.1f;
		return speed;
	case Weather::Sunny:
		speed = 47.3f;
		return speed;
	case Weather::Snow:
		speed = 30.3f;
		return speed;
	default:
		return speed;
	}
}

void Seat::printBrand()
{
	std::cout << "Seat: ";
}

float Seat::getTime()
{
	return time;
}
