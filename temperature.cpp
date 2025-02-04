#include <iostream>
using namespace std;

int main() 
{
    float temperature, convertedTemp;
    int choice;

    cout << "Temperature Conversion Program" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) 
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemp = (temperature * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << convertedTemp << endl;
    } else if (choice == 2) 
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemp = (temperature - 32) * 5/9;
        cout << "Temperature in Celsius: " << convertedTemp << endl;
    } else 
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

