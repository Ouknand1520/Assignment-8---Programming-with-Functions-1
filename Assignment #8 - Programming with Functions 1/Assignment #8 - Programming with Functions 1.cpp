// Nathan
// Ouk
// 0834524@my.msjc.edu
// Assignmnet #8
// Assignment #8 - Programming with Functions.cpp : This file contains the 'main' function. Program execution begins and ends there. Assignment #8 - Create a temperature conversion program converting Celsius, Kelvin, and Newton to Fahrenheit, using functions. 
//

#include <iostream>
using namespace std;

// Function prototypes
double C2F(double temperature);
double K2F(double temperature);
double N2F(double temperature);

int main()
{
    char unit;
    double temperature;

    std::cout << "welcome to the super Celsius/Kelvin/Newton converter. This program converts either Celsius, Kelvin, or Newton to Fahrenheit." << endl;

    std::cout << endl;

    std::cout <<   "To get started, the user needs to input the temperature, then the unit, for example, 60 C." << endl;

    std::cout << endl;

    std::cout << "If you waish to conclude the program, then simply input X as the unit. Be careful not to input 'X', or 'x' by itself as it causes the program to loop until the end of time." << endl;

    std::cout << endl;

    while (true)
    {
        cin >> temperature >> unit;
        std::cout << endl;

        if (unit == 'C' || unit == 'c')
        {
            std::cout << C2F(temperature) << " F" << endl;
            std::cout << endl;
        }
        else if (unit == 'K' || unit == 'k')
        {
            std::cout << K2F(temperature) << " F" << endl;
            std::cout << endl;
        }
        else if (unit == 'N' || unit == 'n')
        {
            std::cout << N2F(temperature) << " F" << endl;
            std::cout << endl;
        }

        else if (unit == 'X' || unit == 'x')
        {
            std::cout << "The program has successfully concluded. Thank you for using me. <smily face>" << endl;
            return 0;
        }

        std::cout << "Enter another temperature and unit, or insert 'x', or 'X' as the unit to conclude the program, do not input just 'X', or 'x' by itself or the program with loop endlessly." << endl;
        std::cout << endl;
    }
}

// Celsius to Fahrenheit
double C2F(double temperature)
{
    return temperature * 9 / 5 + 32;
}

// Kelvin to Fahrenheit
double K2F(double temperature)
{
    return (temperature - 273.15) * 1.8000 + 32;
}

// Newton to Fahrenheit
double N2F(double temperature)
{
    return temperature * 60 / 11 + 32;
}