/**
* Author: Dan Capps
* Date: 12.4.17
* Assignment: HW 8 PC 4
* Time spent on project: 30 min
*/

#include <iostream>

using namespace std;

//Declared constants
const int SIZE = 18;

//Declare prototypes
long numberRequest();
bool binarySearch(const long [], int, long);
const long * selectionSort(long *, int);

int main() {

    long accountNumber;
    bool decision;
    const long *select;

    long array[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                        8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

    accountNumber = numberRequest();
    select = selectionSort(array, SIZE);
    decision = binarySearch(select, SIZE, accountNumber);

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

const long * selectionSort(long *a, int numberElements)
{

    long startScan, minIndex, minValue;
    for (int startScan = 0; startScan < (numberElements-1); startScan++)
    {
        minIndex = startScan;
        minValue = a[startScan];
        for (int index = startScan + 1; index < numberElements; index++)
        {
            if (a[index] < minValue)
            {
                minValue = a[index];
                minIndex = index;
            }
        }
        a[minIndex] = a[startScan];
        a[startScan] = minValue;
    }
    return reinterpret_cast<const long *>(a[startScan]);
}

bool binarySearch(const long a[], int numberElements, long value)
{
    int first = 0;
    int last =  numberElements -1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last )/2;
        if (a[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if(a[middle] > value)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return found;
}