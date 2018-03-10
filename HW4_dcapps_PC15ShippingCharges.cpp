/*
 * Creator: Dan Capps
 * Date Created: 10.10.2017
 * Assignment: HW 4 PC 15
 * Time spent: 45 min
 *
 */

#include <iostream>

using namespace std;

int main() {

    //Initialize variables
    double weight;
    double distance;
    double charge;
    double shippingRate;

    //Greeting
    cout << "Welcome to The Fast Freight Shipping Company!" << endl;

    //Ask for package weight
    cout << "Enter the weight of your package in kilograms: " << endl;
    cin >> weight;
    if (weight <= 20)
    {
        //Ask for distance
        cout << "Enter the distance your package needs to travel in miles: " << endl;
        cin >> distance;

        if (distance >= 10 && distance <= 3000)
        {
            if(weight > 0 && weight <= 2)
            {
                cout << "The rate for your package per 500 miles shipped is $1.10." << endl;
                shippingRate = distance / 500;
                charge = shippingRate * 1.10;
                cout << "Your " << weight << " kg package delivered " << distance << " miles away will cost you $" << charge << "." << endl;

            }
            else if (weight > 2 && weight <= 6)
            {
                cout << "The rate for your package per 500 miles shipped is $2.20." << endl;
                shippingRate = distance / 500;
                charge = shippingRate * 2.20;
                cout << "Your " << weight << " kg package delivered " << distance << " miles away will cost you $" << charge << "." << endl;
            }
            else if (weight > 6 && weight <= 10)
            {
                cout << "The rate for your package per 500 miles shipped is $3.70." << endl;
                shippingRate = distance / 500;
                charge = shippingRate * 3.70;
                cout << "Your " << weight << " kg package delivered " << distance << " miles away will cost you $" << charge << "." << endl;
            }
            else if (weight > 10 && weight <= 20)
            {
                cout << "The rate for your package per 500 miles shipped is $3.70." << endl;
                shippingRate = distance / 500;
                charge = shippingRate * 4.80;
                cout << "Your " << weight << " kg package delivered " << distance << " miles away will cost you $" << charge << "." << endl;
            }
        }
        else
        {
            cout << "We do not accept distances of less than 10 miles and more than 3000 miles. " << endl;
        }
    }
    else
    {
        cout << "We do not accept weights of more than 20 kg." << endl;
    }

    //Display console
    system("pause");
    return 0;
}