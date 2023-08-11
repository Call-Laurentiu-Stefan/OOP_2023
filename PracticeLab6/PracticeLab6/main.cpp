#include "Header.h"
#include <iostream>

int main()
{
    B b; //Ctor B
    b.calcul(); //Calcul B
    int x = b.getX(); //B->X
    std::cout << "x = " << x<<std::endl; // 15
    D d; // Ctor B Ctor D
    d.calcul(); //Calcul D
    x = d.getX(); //D->X
    std::cout << "x = " << x << std::endl; // -2
    B* bb = new D(); //Ctor B Ctor D 
    bb->calcul(); //Calcul B
    x = bb->getX(); //B->X
    std::cout << "x = " << x << std::endl;//15
    delete bb; //Dtor D Dtor B 
    E e;
    e.calcul();
    e.B::getX();
    return 0;
}   //Dtor D Dtor B -> D
    //Dtor B -> B

