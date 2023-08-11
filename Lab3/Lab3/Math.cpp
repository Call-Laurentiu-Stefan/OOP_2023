#include "Math.h"

int Math::Add(int x, int y)
{
    return x + y;
}

int Math::Add(int x, int y, int z)
{
    return x + y + z;
}

int Math::Add(double x, double y)
{
    return x + y;
}

int Math::Add(double x, double y, double z)
{
    return x + y + z;
}

int Math::Mul(int x, int y)
{
    return x * y;
}

int Math::Mul(int x, int y, int z)
{
    return x * y * z;
}

int Math::Mul(double x, double y)
{
    return x * y;
}

int Math::Mul(double x, double y, double z)
{
    return x * y * z;
}

int Math::Add(int count, ...)
{
    int sum = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

char* Math::Add(const char* x, const char* y)
{
    if (x == nullptr || y == nullptr) {
        return nullptr;
    }
    int s = 0;
    s = atoi(x) + atoi(y);
    char* result = new char[(strlen(x) + strlen(y) + 1)];
    _itoa(s, result, 10);
    return result;
}
