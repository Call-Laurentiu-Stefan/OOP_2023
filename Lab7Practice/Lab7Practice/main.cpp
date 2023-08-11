#include "Complex.h"
#include "Colectie.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    Complex c1 = "50+100j"_complex;
    cout << c1;

    Colectie<int> col1;
    srand(0);
    for (int i = 0; i < 10; i++)
        col1.Insert(rand() % 50);
    col1.Sort();
    col1.Print();
    cout << endl;

    Colectie<char> col2;
    for (int i = 0; i < 10; i++)
        col2.Insert(' ' + rand() % (127 - 32));
    col2.Sort();
    col2.Print();
    cout << endl;

    Colectie<Complex> col3;
    for (int i = 0; i < 10; i++)
        col3.Insert({ rand() % 50, rand() % 50 });
    col3.Sort();
    col3.Print();
    cout << endl;

    return 0;
}