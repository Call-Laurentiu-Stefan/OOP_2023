#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
    cout << Math::Add(5, 3)<<endl;
    cout << Math::Add(2, 8, 5)<<endl;
    cout << Math::Add(2.3, 1.8)<<endl;
    cout << Math::Add(7.41, 3.0, 2.6)<<endl;
    cout << Math::Mul(2, 9)<<endl;
    cout << Math::Mul(12, 5, 3)<<endl;
    cout << Math::Mul(7.23, 3.1)<<endl;
    cout << Math::Mul(3.5, 1.2, 7.52)<<endl;
    cout << Math::Add(4, 9, 1, 15, 25)<<endl;
    cout << Math::Add("123", "45");
}
