/*
 * Creator: Dan Capps
 * Date created: 10.18.2017
 * Assignment: HW 5 PC 22
 * Time spent: 60 min
 */

#include <iostream>

using namespace std;

int main() {

    //Initialize variables
    int number;

    //Ask user for a positive integer no greater than 15
    cout << "Please enter a positive number no greater than 15: " << endl;
    cin >> number;

    while (number < 1 || number > 15)
    {
        cout << "The number you entered is out of range." << endl << endl;
        cout << "Please enter a positive number no greater than 15: " << endl;
        cin >> number;
    }

    //Display a square using an X
    //The user's number will be the length of each side of the square
    for (int rows = 0; rows < number; rows++)
    {
        for (int cols = 0; cols < number; cols++)
        {
            cout << "X ";
        }
        cout << endl;
    }

    //Display console
    system("pause");
    return 0;
}