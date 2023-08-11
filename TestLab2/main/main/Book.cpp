#include "Book.h"

std::string Book::GetType()
{
    return "Book";
}

int Book::GetQuantity()
{
    return quantity;
}

int Book::GetPrice()
{
    return price;
}

void Book::Print()
{
    std::cout << this->GetType() << " (Title=" << title << ", Author=" << author << ") " << "Price=" << price << " Quantity=" << quantity << "\n";
}
