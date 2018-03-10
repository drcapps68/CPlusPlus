/*
 * Creator: Dan Capps
 * Date created: 10.18.2017
 * Assignment: HW 5 PC 21
 * Time spent: 30 min
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    //Initialize variables
    int guess;
    int tries = 0;
    int randNum;

    //Generate a random number
    srand(time(NULL));
    randNum = rand();

    //Ask user to guess the number
    cout << "Guess what the number is: " << endl;
    cin >> guess;

    while (guess != randNum)
    {
        //If guess is high, display too high
        if (guess > randNum)
        {
            cout << "Too high, guess again: " << endl;
            cin >> guess;
            tries++;
        }
            //If guess is too low, display too low
        else
        {
            cout << "Too low, guess again: " << endl;
            cin >> guess;
            tries++;
        }
    }
    tries++;
    cout << "Good job! Your guess of " << guess << " is correct. The random number is " << randNum << endl;
    cout << "It took you " << tries << " tries." << endl;

    //Display console
    system("pause");
    return 0;
}