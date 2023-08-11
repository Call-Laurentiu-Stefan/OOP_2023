#pragma once
#include "Weather.h"
#include "Car.h"
#include <iostream>

class Circuit
{
	int length, carsNumber, winnersNumber, losersNumber;
	Weather weather;
	Car* cars[5];
	Car* winners[5];
	Car* losers[5];
public:
	Circuit();
	~Circuit();
	void SetLength(int x);
	void SetWeather(Weather w);
	void AddCar(Car* c);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
	

};

