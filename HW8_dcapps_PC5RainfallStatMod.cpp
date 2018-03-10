/*
 * Creator: Dan Capps
 * Date created: 12.4.2017
 * Assignment: HW 8 PC 5
 * Time spent: 30 min
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    //Initialize variables
    const int NUM_MONTHS = 12;

    float rain;
    float highest;
    float lowest;
    int startScan, minIndex, minValue;

    string months[NUM_MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August",
                                 "September", "October", "November", "December"};
    float rainfall[NUM_MONTHS] = {};

    for(int i = 0; i <NUM_MONTHS; i++) {
        //Ask user for the inches of rainfall for the month
        cout << "Please enter the inches of rainfall for the month of " << months[i] << " : " << endl;
        cin >> rainfall[i];
        //Do not accept a number less than 1 for the amount of rainfall
        while (rainfall[i] < 0) {
            cout << "I cannot accept a number lower than 0." << endl << endl;
            cout << "Please enter the amount of rainfall: " << endl;
            cin >> rainfall[i];
        }
    }
    for (startScan = 0; startScan < NUM_MONTHS; startScan++) {
        minIndex = startScan;
        minValue = rainfall[startScan];
        for (int i = startScan + 1; i < NUM_MONTHS; i++) {
            if (rainfall[i] < minValue) {
                minValue = rainfall[i];
                minIndex = i;
            }
        }
        rainfall[minIndex] = rainfall[startScan];
        rainfall[startScan] = minValue;
    }
    for(int i=0;i<NUM_MONTHS;i++)
    {
        cout << rainfall[i] << endl;
    }





    //Display console
    system("pause");
    return 0;
}