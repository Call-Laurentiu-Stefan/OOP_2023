#pragma once
#include "Article.h"
class VideoGame : public Article
{
	std::string platform;
	std::string name;
	int price;
	int quantity;
public:
	VideoGame(int p, int q, std::string plat, std::string n):price(p),quantity(q),platform(plat),name(n){}
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

