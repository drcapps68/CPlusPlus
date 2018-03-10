//Creator: Dan Capps
//Date Created: 10.8.2017
//Assignment: 3
//Time spent: 1 hour

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //Initialize variables
    const double PI = 3.14159;
    double radian = (PI/180);
    double angle;
    double sineAnswer;
    double cosineAnswer;
    double tangentAnswer;

    //Ask user for an angle, entered in radians
    cout << "Please enter an angle in radians: " << endl;
    cin >> angle;

    //Calculate sine
    sineAnswer = sin(angle * radian);

    //Calculate cosine
    cosineAnswer = cos(angle * radian);

    // Calculate tangent
    tangentAnswer = tan(angle * radian);

    //Display all 3 results in fixed-point notation, rounded to 4 decimal places
    cout << setprecision(4) << fixed;
    cout << "Your angle has a sine of: " << showpoint << sineAnswer << " radians." << endl << endl;
    cout << "Your angle has a cosine of: " << showpoint << cosineAnswer << " radians. " << endl << endl;
    cout << "Your angle has a tangent of: " << showpoint << tangentAnswer << " radians. " << endl;

    //Display console
    system("pause");
    return 0;
}