/*
 * Creator: Dan Capps
 * Date Created: 10.10.2017
 * Assignment: HW 4 PC 23
 * Time spent: 45 min
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    //Initialize variables
    int choice;
    double radius;
    double area;
    double length;
    double width;
    double base;
    double height;

    const  int CIRCLE = 1,
                RECTANGLE = 2,
                TRIANGLE = 3,
                QUIT = 4;

    const double PI = 3.14159,
            HALF = 0.5;

    //Display menu
    cout << "Geometry Calculator" << endl;

    cout << "\t 1. Calculate the Area of a Circle \n"
         << "\t 2. Calculate the Area of a Rectangle \n"
         << "\t 3. Calculate the Area of a Triangle \n"
         << "\t 4. Quit \n"
         << "\t Enter your choice (1-4): " << endl;
    cin >>  choice;

    cout << fixed << showpoint << setprecision(2);

    if (choice == CIRCLE){
        cout << "Please enter the radius of the circle: "<< endl;
        cin >> radius;
        if(radius > 0){
            area = PI * pow(radius, 2);
            cout << "The area of a circle with a radius of " << radius << " is " << area << endl;
        }else{
            cout << "You have entered a negative number or an invalid input. " << endl;
        }
    }
    else if (choice == RECTANGLE){
        cout << "Please enter the length of the rectangle: "<< endl;
        cin >> length;

        cout << "Please enter the width of the rectangle: "<< endl;
        cin >> width;

        if(length > 0 && width > 0){
            area = length * width;
            cout << "A rectangle with a length of " << length << " and a width of " << width
                 << " has the area of " << area << endl;
        }
        else if(length == 0 || width == 0){
            cout << "Well, that is just silly!" << endl;
        }
        else{
            cout << "You have entered a negative number or an invalid input." << endl;
        }
    }
    else if (choice == TRIANGLE){
        cout << "Please enter the base of the triangle: "<< endl;
        cin >> base;

        cout << "Please enter the height of the triangle: "<< endl;
        cin >> height;

        //Perform calculation

        area = (base * height) * HALF;

        if(base > 0 && height > 0){
            cout << "A triangle with a base of " << base << " and a height of " << height
                 << " has the area of " << area << endl;
        }
        else if(base == 0 || height == 0){
            cout << "Well, that is just silly!" << endl;
        }
        else{
            cout << "You have entered a negative number or an invalid input." << endl;
        }

    }

    else if(choice == QUIT){
        cout << "Thank you for using the Geometry Calculator." << endl;
    }

    else{
        cout << "You have entered a number that is outside of the range which is requested." << endl;
    }

    //Display console
    system("pause");
    return 0;
}