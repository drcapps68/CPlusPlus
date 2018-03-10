/*
 * Creator: Dan Capps
 * Date Created: 10.10.2017
 * Assignment: 1
 * Time spent: 30 min
 *
 */
#include <iostream>

using namespace std;

int main() {

    //Initialize variables
    int userNumber1;
    int usernumber2;

    //Ask user for 2 numbers
    cout << "Please enter a number: " << endl << endl;
    cin >> userNumber1;

    cout << "Please enter another number: " << endl << endl;
    cin >> usernumber2;

    //Use conditional operator to determine smaller number
    cout << "Your first number " << userNumber1 << (userNumber1 > usernumber2 ? " is greater than " : " is less than ") << "your second number "
         << usernumber2 << endl << endl;

    //Display console
    system("pause");
    return 0;
}