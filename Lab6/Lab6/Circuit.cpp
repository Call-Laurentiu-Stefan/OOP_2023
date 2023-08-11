#include "Circuit.h"

Circuit::Circuit()
{
	length = 0;
	carsNumber = 0;
	winnersNumber = 0;
	losersNumber = 0;
}

Circuit::~Circuit()
{
	for (int i = 0; i < carsNumber; i++) {
		delete cars[i];
	}
}

void Circuit::SetLength(int x)
{
	length = x;
}

void Circuit::SetWeather(Weather w)
{
	weather = w;
}

void Circuit::AddCar(Car* c)
{
	cars[carsNumber++] = c;
}

void Circuit::Race()
{
	for (int i = 0; i < carsNumber; i++) {
		if ((cars[i]->getSpeed(weather) * (cars[i]->fCapacity / cars[i]->fConsumption)) >= length) {
			cars[i]->time = length / cars[i]->getSpeed(weather);
			winners[winnersNumber++] = cars[i];
		}
		else {
			losers[losersNumber++] = cars[i];
		}
	}

}

void Circuit::ShowFinalRanks()
{
	Car* aux;
	for (int i = 0; i < winnersNumber; i++) {
		for (int j = i; j < winnersNumber; j++) {
			if (winners[i]->time > winners[j]->time) {
				aux = winners[i];
				winners[i] = winners[j];
				winners[j] = aux;
			}
		}
	}
	std::cout << "The time each car needed to finish the circuit sorted from the fastest car to the slowest: \n";
	for (int i = 0; i < winnersNumber; i++) {
		winners[i]->printBrand();
		std::cout << winners[i]->getTime() << " h\n";
	}
	std::cout << "\n";
}

void Circuit::ShowWhoDidNotFinish()
{
	std::cout << "Cars that did not finish: \n";
	for (int i = 0; i < losersNumber; i++) {
		losers[i]->printBrand();
		std::cout << "X\n";
	}
	std::cout << "\n";
}
