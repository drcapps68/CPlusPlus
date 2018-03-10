#include <iostream>
#include <iomanip>

using namespace std;

int enterNum();

int main() {

    const int SIZE = 10;
    int numArray[SIZE];
    int lowest;
    int highest;

    numArray[0] = enterNum();
    lowest = numArray[0];
    highest = numArray[0];

    for(int i=1; i<SIZE; i++)
    {
        numArray[i] = enterNum();
        if(numArray[i] < lowest)
        {
            lowest = numArray[i];
        }
        else if(numArray[i] > highest)
        {
            highest = numArray[i];
        }
    }

    cout << "The highest number is " << highest << endl;
    cout << "The lowest number is " << lowest <<endl;

    //Display console
    system("pause");
    return 0;
}

int enterNum()
{
    int num;

    cout << "Please enter a number: ";

    cin >> num;

    return num;
}