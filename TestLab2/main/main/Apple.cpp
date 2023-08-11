#include "Apple.h"

std::string Apple::GetType()
{
    return "Apple";
}

int Apple::GetQuantity()
{
    return quantity;
}

int Apple::GetPrice()
{
    return price;
}

void Apple::Print()
{
    std::cout << this->GetType() << " (from=" << country << ") Price=" << price << " Quantity=" << quantity << "\n";

}
