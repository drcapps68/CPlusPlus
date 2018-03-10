#include <iostream>
#include <iomanip>

using namespace std;

float celsius(float);

int main() {

    float temp;

    //Display message
    cout << "Celsius\tFahrenheit" << endl;
    cout << "-------------------------" << endl;

    //Use a loop to display a table of the Celsius temperatures 0-20, and their Fahrenheit equivalent
    for (temp = 0; temp < 21; temp++)
    {
        //Calculate temperature conversion
        temp = celsius(fahrenheit);
        cout << temp << "\t\t" << temp << endl;
    }

    //Display console
    system("pause");
    return 0;
}

float celsius(float temp)
{
    //Initialize variables
    float functionTemp;
    float fahrenheit;
    float formula1 = (9.0/5);
    float formula2 = 32;

    //Ask for input
    cout << "What is the temperature in Celsius which you would like to convert: " << endl;
    cin >> functionTemp;

    //Calculate temperature conversion
    fahrenheit = (formula1 * functionTemp) + formula2;




}