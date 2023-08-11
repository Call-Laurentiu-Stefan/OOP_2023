#include <iostream>

using namespace std;

float operator""_Kelvin(unsigned long long int x) {
    return (x - 273.15);
}

float operator""_Fahrenheit(unsigned long long int x) {
    return ((x - 32) / 1.8);
}

int main() {
    cout << "Temperatura in Kelvin: 300 ";
    float a = 300_Kelvin;
    cout << "-> " << a <<" grade Celsius"<<endl;
    cout << "Temperatura in Fahrenheit: 120 ";
    float b = 120_Fahrenheit;
    cout << "-> " << b << " grade Celsius" << endl;
    return 0;

}