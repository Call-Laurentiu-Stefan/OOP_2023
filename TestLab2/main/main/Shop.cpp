#include "Shop.h"

Shop& Shop::Add(Article* e)
{
    items.push_back(e);
    return *this;
}

int Shop::GetTotalPrice()
{
    int suma = 0;
    for (auto i : items) {
        suma = (i->GetPrice()*i->GetQuantity()) + suma;
    }
    return suma;
}

int Shop::GetQuantity(std::string other)
{
    int n = 0;
    for (auto i : items) {
        if (i->GetType() == other) {
            n += i->GetQuantity();
        }
    }
    return n;
}

void Shop::List()
{
    for (auto i : items) {
        i->Print();
    }
}
