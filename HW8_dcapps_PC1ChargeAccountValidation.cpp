/**
 * Author: Dan Capps
 * Date: 12.4.17
 * Assignment: HW 8 PC 1
 * Time spent on project: 30 min
 */

#include <iostream>

using namespace std;

//Declared constants
const int SIZE = 18;

//Declare prototypes
long numberRequest();
bool linearSearch(const long a[], int numberElements, long value);

int main() {

    long accountNumber;
    bool decision;

    long array[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

    accountNumber = numberRequest();

    decision = linearSearch(array, SIZE, accountNumber);

    if(decision == true)
    {
        cout << "Your charge account number is valid!" << endl;
    } else{
        cout << "Your charge account number is invalid." << endl;
    }

    //Display console
    system("pause");
    return 0;
}

long numberRequest()
{
    long accountNum;
    cout << "Please enter your charge account number: " << endl;
    cin >> accountNum;
    return accountNum;
}

bool linearSearch(const long a[], int numberElements, long value)
{
    bool found = false;
    int index = 0;
    int position = -1;
    int linearComparisonCount = 0;

    while (index < numberElements && !found)
    {

        if (a[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
        linearComparisonCount++;
    }
    return found;
}
