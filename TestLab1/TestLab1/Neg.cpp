#include "Neg.h"

Neg::Neg(Expression* e1)
{
    val = e1->getValue();

}

Neg::~Neg()
{
    delete this;
}

void Neg::print()
{
    cout << -val;
}

int Neg::compute()
{
    return -val;
}
