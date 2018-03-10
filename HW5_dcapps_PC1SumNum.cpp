/*
 * Creator: Dan Capps
 * Date created: 10.18.2017
 * Assignment: HW 5 PC 1
 * Time spent: 45 min
 */

#include <iostream>

using namespace std;

int main() {

    //Instantiate variables
    int number;
    int sum = 0;

    //Ask user for positive value
    cout << "Please enter a positive number: " << endl;
    cin >> number;

    //Do not accept negative numbers
    while(number < 0)
    {
        cout << "That was a negative number!" << endl;
        cout << "Please enter a positive: " << endl;
        cin >> number;
    }

    //Get the sum of all of
    for(int i = 1; i <= number; i++)
    {
        sum = sum + i;
        cout << sum << endl;
    }

    //Display console
    system("pause");
    return 0;
}