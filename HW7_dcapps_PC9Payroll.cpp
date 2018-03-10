#include <iostream>

using namespace std;

int main() {

    const int SIZE = 7;

    long empId[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[SIZE];
    double payRate[SIZE];
    double wages[SIZE];

    for(int i=0;i<SIZE;i++)
    {
        cout << "Please enter the amount of hours for employee # " << empId[i] << " : " << endl;
        cin >> hours[i];
        while(hours[i] < 1)
        {
            cout << "You entered zero or a negative number. I cannot accept this value." << endl;
            cout << "Please enter the amount of hours for employee # " << empId[i] << " : " << endl;
            cin >> hours[i];
        }
        cout << "Please enter the payrate for employee # " << empId[i] << " : " << endl;
        cin >> payRate[i];
        while (payRate[i] < 15.00)
        {
            cout << "You entered a value below the minimum wage." << endl;
            cout << "Please enter the payrate for employee # " << empId[i] << " : " << endl;
            cin >> payRate[i];
        }

    }

    for(int i=0;i<SIZE;i++)
    {
        wages[i] = hours[i] * payRate[i];
        cout << "The gross wages for employee #" << empId[i] << " is: $" << wages[i] << "." << endl;
    }

    //Display console
    system("pause");
    return 0;
}

