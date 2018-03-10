#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Prototypes
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main() {
    //Define variables
    string north, south, east, west, central;
    int accidentsInNorth, accidentsInSouth, accidentsInEast, accidentsInWest, accidentsInCentral;

    getNumAccidents(north);
    getNumAccidents(south);
    getNumAccidents(east);
    getNumAccidents(west);
    getNumAccidents(central);


    //findLowest(accidentsInNorth, accidentsInSouth, accidentsInEast, accidentsInWest, accidentsInCentral);

    //Display console
    system("pause");
    return 0;
}

int getNumAccidents(string region)
{
    int accidents;

    //Ask user for the number of automobile accidents reported in that year
    cout << "Enter the number of automobile accidents reported in that year for the "<< region << " : " << endl;
    cin >> accidents;

    //Validate input
    while(accidents < 0)
    {
        cout << "I cannot accept a number lower than 0" << endl;
        cout << "Enter the number of automobile accidents reported in that year: " << endl;
        cin >> accidents;
    }

    //return input

    return accidents;

}

void findLowest(int accidentRegion1, int accidentRegion2, int accidentRegion3, int accidentRegion4, int accidentRegion5)
{

}