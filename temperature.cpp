#include <iostream>
using namespace std;
void convertTemperature(double temperature, char scale)
{
    if (scale == 'C' || scale == 'c')
    {
        double fahrenheit = (temperature * 9.0 / 5.0) + 32.0;
        cout << temperature << "°C is " << fahrenheit << "°F" << endl;
    }
    else if (scale == 'F' || scale == 'f')
    {
        double celsius = (temperature - 32.0) * 5.0 / 9.0;
        cout << temperature << "°F is " << celsius << "°C" << endl;
    }
    else
    {
        cout << "Invalid scale. Please use 'C' for Celsius or 'F' for Fahrenheit." << endl;
    }
}
int main()
{
    double temperature;
    char scale;
    cout << "Enter temperature: ";
    cin >> temperature;