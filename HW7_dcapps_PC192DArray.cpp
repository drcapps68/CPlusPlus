#include <iostream>

using namespace std;

const int NUM_ROWS = 3;
const int NUM_COLS = 2;

int getTotal (int array[NUM_ROWS][NUM_COLS]);
float getAverage(int array[NUM_ROWS][NUM_COLS]);
int getRowTotal(int array[NUM_ROWS][NUM_COLS], int rowNumber);
int getColumnTotal(int array[NUM_ROWS][NUM_COLS], int colNumber);
int getHighestRow(int array[NUM_ROWS][NUM_COLS], int rowNumber);
int getLowestRow(int array[NUM_ROWS][NUM_COLS], int rowNumber);

int main() {

    int array[NUM_ROWS][NUM_COLS] = {{8,5}, {6,28}, {19,68}};
    int total = 0;
    float avg = 0.0;
    int rowTotal = 0;
    int colTotal = 0;
    int highest = 0;
    int lowest = 0;
    int rowNumber = 0;
    int colNumber = 0;

    total = getTotal(array);
    avg = getAverage(array);

    cout << "What row would you like to process? " << endl;
    cin >> rowNumber;

    cout << "What column would you like to process? " << endl;
    cin >> colNumber;

    rowTotal = getRowTotal(array, rowNumber);
    colTotal = getColumnTotal(array, colNumber);

    highest = getHighestRow(array, rowNumber);
    lowest = getLowestRow(array, rowNumber);

    cout << "The total sum of all of the numbers is: " << total << endl;
    cout << "The average of all the numbers is: " << avg << endl;
    cout << "The sum of row #" << rowNumber << " is: " << rowTotal << endl;
    cout << "The sum of column #" << colNumber << " is: " << colTotal << endl;
    cout << "The highest of all the numbers in row #" << rowNumber << " is: " << highest << endl;
    cout << "The lowest number of all the numbers in row #" << rowNumber << " is: " << lowest << endl;

    return 0;
}

int getTotal (int array[NUM_ROWS][NUM_COLS])
{
    int total = 0;
    for(int i=0;i<NUM_ROWS;i++)
    {
        for(int j=0;j<NUM_COLS;j++)
        {
            total += array[i][j];
        }
    }
    return total;
}

float getAverage(int array[NUM_ROWS][NUM_COLS])
{
    int total = 0;
    float avg = 0.0;
    for(int i=0;i<NUM_ROWS;i++)
    {
        for(int j=0;j<NUM_COLS;j++)
        {
            total += array[i][j];
        }
    }
    avg = (total/(NUM_ROWS * NUM_COLS));
    return avg;
}

int getRowTotal(int array[NUM_ROWS][NUM_COLS], int rowNumber)
{
    int rowTotal = 0;
    for(int i=0;i<NUM_COLS;i++)
    {
        rowTotal += array[rowNumber][i];
    }
    return rowTotal;
}
int getColumnTotal(int array[NUM_ROWS][NUM_COLS], int colNumber)
{
    int colTotal = 0;
    for(int i=0;i<NUM_COLS;i++)
    {
        colTotal += array[colNumber][i];
    }
    return colTotal;
}
int getHighestRow(int array[NUM_ROWS][NUM_COLS], int rowNumber)
{
    int highest = array[rowNumber][0];
    for(int i=0;i<NUM_COLS;i++)
    {
        if(array[rowNumber][i] > highest)
        {
            highest = array[rowNumber][i];
        }
    }
    return highest;
}
int getLowestRow(int array[NUM_ROWS][NUM_COLS], int rowNumber)
{
    int lowest = array[rowNumber][0];
    for(int i=0;i<NUM_COLS;i++)
    {
        if(array[rowNumber][i] > lowest)
        {
            lowest = array[rowNumber][i];
        }
    }
    return lowest;
}