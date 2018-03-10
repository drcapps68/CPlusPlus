#include <iostream>
#include <iomanip>

using namespace std;

void getShippingData(int &, int &, double &);
void displayOrderStatus(int, int, double, double = 10.0);

int main() {



    //Display console
    system("pause");
    return 0;
}

void getShippingData(int &numberSpoolsOrdered, int &numberSpoolsInStock, double &numberSpecialCharges)
{
    char extraShippingCharges;

    cout << "Please enter the number of spools ordered to be shipped: ";
    cin >> numberSpoolsOrdered;
    while (numberSpoolsOrdered < 1)
    {
        cout << "The number you have entered is invalid." << endl;
        cout << "Please enter the number of spools ordered to be shipped: ";
        cin >> numberSpoolsOrdered;
    }

    cout << "Please enter the number of spools in stock: ";
    cin >> numberSpoolsInStock;
    while(numberSpoolsInStock < 0)
    {
        cout << "The number you have entered is invalid." << endl;
        cout << "Please enter the number of spools in stock: ";
        cin >> numberSpoolsInStock;
    }

    cout << "Are there any special shipping and handling charges for this order? Please enter Y for yes or N for no: ";
    cin >> extraShippingCharges;
    if (extraShippingCharges == 'Y' || extraShippingCharges == 'y')
    {
        cout << "Please enter the amount of the special shipping and handling charges: ";
        cin >> numberSpecialCharges;
        while(numberSpecialCharges < 0)
        {
            cout << "The number you have entered is invalid" << endl;
            cout << "Please enter the amount of the special shipping and handling charges: ";
            cin >> numberSpecialCharges;
        }
    }
}

void displayOrderStatus(int spoolOrdered, int spoolInStock, double spoolSpecialCharges, double spoolCharges)
{
    const double SPOOL_UNIT_COST = 100.00;
    int spoolBackOrder = 0;
    double spoolSubTotal = 0.0, spoolTotal = 0.0;

    if(spoolOrdered > spoolInStock)
    {
        spoolBackOrder = (spoolOrdered - spoolInStock);
        spoolSubTotal = (spoolOrdered - spoolBackOrder) * SPOOL_UNIT_COST;

        if (spoolSpecialCharges)
        {
            spoolTotal = (spoolOrdered - spoolBackOrder) * SPOOL_UNIT_COST + (spoolOrdered - spoolBackOrder) * spoolCharges + spoolSpecialCharges;
        }
        else
        {
            spoolTotal = (spoolOrdered - spoolBackOrder) * SPOOL_UNIT_COST + (spoolOrdered - spoolBackOrder) * spoolCharges;
        }
    }
    else if (spoolOrdered < spoolInStock)
    {
        spoolSubTotal = (spoolOrdered * SPOOL_UNIT_COST);
        if(spoolSpecialCharges)
        {
            spoolTotal = (spoolOrdered * SPOOL_UNIT_COST) + (spoolOrdered * spoolCharges) + spoolSpecialCharges;
        }
        else
        {
            spoolTotal = (spoolOrdered * SPOOL_UNIT_COST) + (spoolOrdered * spoolCharges);
        }
    }


}