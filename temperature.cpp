#include <iostream>
using namespace std;
void convertTemperature(double temperature, char scale)
{
    if (scale == 'C' || scale == 'c')
    {
        double fahrenheit = (temperature * 9.0 / 5.0) + 32.0;
        cout << temperature << "°C is " << fahrenheit << "°F" << endl;