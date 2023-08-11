#include <iostream>
#include "Canvas.h"

using namespace std;

int main()
{
    Canvas c{20,20};
    c.DrawRect(1, 3, 10, 7,'*');
    c.Print();
    c.FillRect(1, 3, 10, 7, '-');
    c.Print();
    c.Clear();
    c.DrawCircle(9, 9, 7, '*');
    c.Print();
    c.FillCircle(9, 9, 7, '-');
    c.Print();
    c.Clear();
    c.DrawLine(1, 1, 15, 15, '*');
    c.Print();
}
