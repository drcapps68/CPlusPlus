/*
 * Creator: Dan Capps
 * Date created: 10.18.2017
 * Assignment: HW 5 PC 5
 * Time spent: 30 min
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //Initialize variables
    int year = 2018;
    double membershipFee = 25000.00;

    //Display the projected rates for the next 6 years

    for( int i = year; i <= (year + 6); i++)
    {
        cout << fixed << showpoint << setprecision(2);
        cout << "The projected rates for " << i << " are: " << membershipFee << endl;
        double feeIncrease = .04;
        feeIncrease *= membershipFee;
        membershipFee += feeIncrease;
    }



    //Display console
    system("pause");
    return 0;
}