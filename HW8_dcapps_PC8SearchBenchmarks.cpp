/**
 * Author: Dan Capps
 * Date: 12.4.17
 * Assignment: HW 8 PC 8
 * Time spent on project: 30 min
 */

#include <iostream>

using namespace std;

//Function prototype
int number();
int linearSearch(const int[], int, int);
int binarySearch(const int[], int, int);

//constant variables
const int SIZE = 26;

int main() {

    int num;
    int linearComparisons;
    int binaryComparisons;

    int array[SIZE] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    num = number();

    linearComparisons = linearSearch(array, SIZE, num);
    binaryComparisons = binarySearch(array, SIZE, num);

    cout << "The number you selected was found!" << endl;
    cout << "The linear search found it in " << linearComparisons << " comparisons!" << endl;
    cout << "The binary search found it in " << binaryComparisons << " comparisons!" << endl;

    //Display console
    system("pause");
    return 0;
}

int number()
{
    int number;
    cout << "Please enter a prime number between 1 and 100 and I will search the list: " << endl;
    cin >> number;
    return number;
}

int linearSearch(const int a[], int numberElements, int value)
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
    return linearComparisonCount;
}

int binarySearch(const int a[], int numberElements, int value)
{
    int first = 0;
    int last =  numberElements -1;
    int middle;
    int position = -1;
    int binaryComparisonCount = 0;
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
        binaryComparisonCount++;
    }
    return binaryComparisonCount;
}