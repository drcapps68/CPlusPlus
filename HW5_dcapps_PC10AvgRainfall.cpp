/*
 * Creator: Dan Capps
 * Date created: 10.18.2017
 * Assignment: HW 5 PC 10
 * Time spent: 30 min
 */

#include <iostream>

using namespace std;

int main() {

    //Initialize variables
    int years;
    int months = 12;
    int rainfall = 0;
    int totalRainfall;
    float averageRainfallPerMonth;

    //Ask for number of years
    cout << "Please enter the number of years: " << endl;
    cin >> years;

    //Do not accept a number less than 1 for the number of years
    while(years < 1)
    {
        cout << "I cannot accept a number lower than 1." << endl << endl;
        cout << "Please enter the number of years: " << endl;
        cin >> years;
    }

    //Outer loop iterate once for each year
    for(int i = 1; i <= years; i++)
    {
        //Inner loop will iterate 12 times for each month
        for(int j = 1; j <= months; j++)
        {
            //Ask user for the inches of rainfall for the month
            cout << "Please enter the inches of rainfall for the month: " << endl;
            cin >> rainfall;
            totalRainfall += rainfall;
        }
        averageRainfallPerMonth = totalRainfall/months;

    }
    //Display the number of months, the total inches of rainfall, and the average rainfall per month for the entire period
    cout << "There was " << totalRainfall << " total inches of rainfall; which results in an average of "
         << averageRainfallPerMonth << " inches for " << years << " years." << endl;


    //Display console
    system("pause");
    return 0;
}