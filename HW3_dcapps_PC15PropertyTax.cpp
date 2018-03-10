//Creator: Dan Capps
//Date Created: 10.8.2017
//Assignment: 3
//Time spent: 1 hour

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //Initialize variables
    float assessmentValue;
    float assessmentValueRate = .75;
    float assessmentValueFactor = 100;
    float propertyTax;
    float propertyTaxRate = .60;
    float propValue = 10000;

    //Calculate assessment value
    assessmentValue = propValue * propertyTaxRate;

    //Calculate property tax
    propertyTax = ((assessmentValue/assessmentValueFactor) * assessmentValueRate);

    //Display assessment value and property tax
    cout << setprecision(2) << showpoint << fixed;
    cout << "The property value is $" << setprecision(2) << propValue << "; the assessment value is $" << setprecision(2) << assessmentValue
         << " and the property tax is $" << setprecision(2) << propertyTax << endl;

    //Display console
    system("pause");
    return 0;
}