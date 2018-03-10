/*
 * Creator: Dan Capps
 * Date created: 10.18.2017
 * Assignment: HW 5 PC 12
 * Time spent: 30 min
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //Initialize variables
    float temp;
    float fahrenheit;
    float formula1 = (9/5);
    float formula2 = 32;

    //Display message
    cout << "Celsius\tFahrenheit" << endl;
    cout << "-------------------------" << endl;

    //Use a loop to display a table of the Celsius temperatures 0-20, and their Fahrenheit equivalent
    for (temp = 0; temp < 21; temp++)
    {
        //Calculate temperature conversion
        fahrenheit = (formula1 * temp) + formula2;
        cout << temp << "\t\t" << fahrenheit << endl;
    }

    //Display console
    system("pause");
    return 0;
}