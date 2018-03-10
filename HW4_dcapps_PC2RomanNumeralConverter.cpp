/*
 * Creator: Dan Capps
 * Date Created: 10.10.2017
 * Assignment: HW4 PC 2
 * Time spent: 30 min
 *
 */

#include <iostream>

using namespace std;

int main() {

    //Initialize variables

    int numberInput;

    //Ask user to enter a number within the range of 1 to 10
    cout << "Please enter a number to be converted. Please select a number between 1 and 10: " << endl;
    cin >> numberInput;

    //Use a switch statement to display Roman numeral version
    switch (numberInput){
        case 1 : cout << "This Roman numeral is I" << endl << endl;
            break;
        case 2 : cout << "This Roman numeral is II" << endl << endl;
            break;
        case 3 : cout << "This Roman numeral is III" << endl << endl;
            break;
        case 4 : cout << "This Roman numeral is IV" << endl << endl;
            break;
        case 5 : cout << "This Roman numeral is V" << endl << endl;
            break;
        case 6 : cout << "This Roman numeral is VI" << endl << endl;
            break;
        case 7 : cout << "This Roman numeral is VII" << endl << endl;
            break;
        case 8 : cout << "This Roman numeral is VIII" << endl << endl;
            break;
        case 9 : cout << "This Roman numeral is IX" << endl << endl;
            break;
        case 10 : cout << "This Roman numeral is X" << endl << endl;
            break;
        default: cout << "You entered something other than a number between 1 and 10" << endl << endl;
    }


    //Display console
    system("pause");
    return 0;
}