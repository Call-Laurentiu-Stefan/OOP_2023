#pragma once
#include "Article.h"
#include <vector>

class Shop
{
	std::vector<Article*> items;
public:
	Shop& Add(Article* e);
	int GetTotalPrice();
	int GetQuantity(std::string other);
	void List();
};

