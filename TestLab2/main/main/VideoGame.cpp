#include "VideoGame.h"

std::string VideoGame::GetType()
{
    return "VideoGame";
}

int VideoGame::GetQuantity()
{
    return quantity;
}

int VideoGame::GetPrice()
{
    return price;
}

void VideoGame::Print()
{
    std::cout << this->GetType() << " (Platform=" << platform << ", Name=" << name << ") " << "Price=" << price << " Quantity=" << quantity << "\n";

}
