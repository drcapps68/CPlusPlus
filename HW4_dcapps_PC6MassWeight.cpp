/*
 * Creator: Dan Capps
 * Date Created: 10.10.2017
 * Assignment: HW 4 PC 6
 * Time spent: 45 min
 *
 */

#include <iostream>

using namespace std;

int main() {

    //Initialize variables
    double weight;
    double mass;
    const double HEAVY = 1000;
    const double LIGHT = 10;

    //Ask user for an object's mass
    cout << "Please enter the mass of the object: " << endl;
    cin >> mass;

    //Calculate weight
    weight = mass * 9.8;

    //Calculate and display too heavy or too light message
    if (weight > HEAVY)
        cout << "The object is too heavy." << endl;

    else if (weight < LIGHT)
        cout << "The object is too light." << endl;

    else
        //Display weight
        cout << "The weight of the object is: " << weight << " newtons." << endl << endl;

    //Display console
    system("return");
    return 0;
}