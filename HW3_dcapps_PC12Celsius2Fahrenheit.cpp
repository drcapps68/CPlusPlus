//Creator: Dan Capps
//Date Created: 10.8.2017
//Assignment: 3
//Time spent: 1 hour

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //Initialize variables
    float userInput;
    float fahrenheit;
    float formula1 = (9.0/5);
    float formula2 = 32;

    //Ask for input
    cout << "What is the temperature in Celsius which you would like to convert: " << endl;
    cin >> userInput;

    //Calculate temperature conversion
    fahrenheit = (formula1 * userInput) + formula2;


    //Display message
    cout << "The temperature " << userInput << "°C" << "has been converted to "<< setprecision(1) << fahrenheit << endl;

    //Display console
    system("pause");
    return 0;
}