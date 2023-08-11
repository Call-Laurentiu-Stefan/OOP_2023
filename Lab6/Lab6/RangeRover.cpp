#include "RangeRover.h"

RangeRover::RangeRover()
{
	fCapacity = 100;
	fConsumption = 10;
	speed = 0.0f;
	time = -1.0f;

}

float RangeRover::getSpeed(Weather w)
{
	switch (w)
	{
	case Weather::Rain:
		speed = 30.1f;
		return speed;
	case Weather::Sunny:
		speed = 33.3f;
		return speed;
	case Weather::Snow:
		speed = 25.3f;
		return speed;
	default:
		return speed;
	};
}

void RangeRover::printBrand()
{
	std::cout << "RangeRover: ";
}

float RangeRover::getTime()
{
	return time;
}
