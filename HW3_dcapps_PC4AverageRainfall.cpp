//Creator: Dan Capps
//Date Created: 10.8.2017
//Assignment: 3
//Time spent: 1 hour

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //Initialize variables
    int months = 3;
    string month1;
    float month1Rainfall;
    string month2;
    float month2Rainfall;
    string month3;
    float month3Rainfall;
    float average;
    float rainfallTotal;

    //Ask user to enter month name and amount of rainfall (in inches) that fell in the first month
    cout << "Please enter the name of the first month: " << endl;
    cin >> month1;
    cout << "Please enter the amount of rain (in inches) that fell for that month: " << endl;
    cin >> month1Rainfall;

    //Ask user to enter month name and amount of rainfall (in inches) that fell in the second month
    cout << "Please type in the name of the second month" << endl;
    cin >> month2;
    cout << "Please enter the amount of rain (in inches) that fell for that month: " << endl;
    cin >> month2Rainfall;

    //Ask user to enter month name and amount of rainfall (in inches) that fell in the third month
    cout << "Please type in the name of the third month" << endl;
    cin >> month3;
    cout << "Please enter the amount of rain (in inches) that fell for that month: " << endl;
    cin >> month3Rainfall;

    //Calculate average
    average = month1Rainfall + month2Rainfall + month3Rainfall;

    average /= months;



    //Display message
    cout << "The average rainfall for " << month1 << ", " << month2  << ", " << month3 << " is " << setprecision(2) << average << endl;

    //Display console
    system("pause");
    return 0;
}