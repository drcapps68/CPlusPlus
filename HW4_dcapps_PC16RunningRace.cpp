/*
 * Creator: Dan Capps
 * Date Created: 10.10.2017
 * Assignment: HW 4 PC 16
 * Time spent: 1 hr 15 min
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    //Initialize variables
    string runner1;
    string runner2;
    string runner3;
    double runner1Time;
    double runner2Time;
    double runner3Time;

    //Ask for 3 runner's names and times
    cout << "Please enter the name of your first runner: " << endl;
    cin >> runner1;

    cout << "Please enter the time your first runner took to finish the race: " << endl;
    cin >> runner1Time;

    cout << "Please enter the name of your second runner: " << endl;
    cin >> runner2;

    cout << "Please enter the time your second runner took to finish the race: " << endl;
    cin >> runner2Time;

    cout << "Please enter the name of your third runner: " << endl;
    cin >> runner3;

    cout << "Please enter the time your third runner took to finish the race: " << endl;
    cin >> runner3Time;

    //Calculate runner's place in the race
    if (runner1Time > 0 && runner2Time > 0 && runner3Time > 0)
    {
        if(runner1Time < runner2Time && runner2Time < runner3Time)
        {
            cout << runner1 << " came in first place with a time of " << runner1Time << endl;
            cout << runner2 << " came in second place with a time of " << runner2Time << endl;
            cout << runner3 << " came in third place with a time of " << runner3Time << endl;
        }

        else if (runner1Time < runner3Time && runner3Time < runner2Time)
        {
            cout << runner1 << " came in first place with a time of " << runner1Time << endl;
            cout << runner3 << " came in second place with a time of " << runner3Time << endl;
            cout << runner2 << " came in third place with a time of " << runner2Time << endl;
        }

        else if (runner2Time < runner1Time && runner1Time < runner3Time)
        {
            cout << runner2 << " came in first place with a time of " << runner2Time << endl;
            cout << runner1 << " came in second place with a time of " << runner1Time << endl;
            cout << runner3 << " came in third place with a time of " << runner3Time << endl;
        }

        else if (runner2Time < runner3Time && runner3Time < runner1Time)
        {
            cout << runner2 << " came in first place with a time of " << runner2Time << endl;
            cout << runner3 << " came in second place with a time of " << runner3Time << endl;
            cout << runner1 << " came in third place with a time of " << runner1Time << endl;
        }
        else if (runner3Time < runner2Time && runner2Time < runner1Time)
        {
            cout << runner3 << " came in first place with a time of " << runner3Time << endl;
            cout << runner2 << " came in second place with a time of " << runner2Time << endl;
            cout << runner1 << " came in third place with a time of " << runner1Time << endl;
        }
    }
    else
    {
        cout << "You have entered a negative number." << endl;
    }


    //Display console
    system("pause");
    return 0;
}