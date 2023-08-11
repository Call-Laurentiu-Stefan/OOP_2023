#pragma once
#include "Article.h"
class Apple : public Article
{
	int price;
	int quantity;
	std::string country;
public:
	Apple(int p, int q, std::string c) : price(p), quantity(q), country(c) {}
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

