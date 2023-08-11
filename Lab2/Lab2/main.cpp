// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList m;
    m.Init();
    m.Add(5);
    m.Add(8);
    m.Add(2);
    m.Add(1);
    m.Add(9);
    m.Add(6);
    m.Add(7);
    m.Add(8);
    m.Add(9);
    m.Add(10);
    m.Add(11);
    m.Add(12);
    m.Print();
    m.Sort();
    m.Print();

}
