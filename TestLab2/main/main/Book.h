#pragma once
#include "Article.h"
class Book : public Article
{
	int price;
	int quantity;
	std::string title;
	std::string author;
public:
	Book(int p, int q, std::string t, std::string a): price(p), quantity(q), title(t), author(a){}
	std::string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

