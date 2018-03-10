//Creators: Dan Capps, Jongwon Park, Roger Luo, and Shouichi Ohkawara
//Date created: 11.15.2017
//Assignment number: 4
//Time spent: 8 hours total

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

string lname();
string fname();
string cellNumber();
string bDay();
char verifyAccount();
int drinkAnswerFunction();
int drinkAnswerValidation();
int customerRewards( int reward = 0);
void getAccountAmount(float &);
string drink(string);
float drink(float);
int linearSearch(const string [], int, string);

int main() {

    //Initialize constants
    const int SIZE = 4;
    const int DRINKS_SIZE = 4;
    const int INFO_SIZE = 7;

    //Initialize variables
    string lastName;
    string firstName;
    string number;
    string birthday;
    string enterLastName;
    char answerAddToAccount;
    char accountAnswer;
    float account;
    float addAmount;
    float purchase;
    string favDrink;
    float favDrinkPrice = 4.25;
    int drinkAnswer;
    int menuChoice;
    string drinkChoice;
    float drinkPrice;
    int reward = 0;
    char tipAnswer;
    float tipA = .15;
    float tipB = .10;
    int count;

    //Establish menu
    ofstream fileOut;
    fileOut.open("menu.txt");
    fileOut << "\t Our drink menu is: " << endl;
    fileOut << "\t\t 1. Mocha for $4.25. " << endl;
    fileOut << "\t\t 2. Espresso for $2.00. " << endl;
    fileOut << "\t\t 3. Latte for $3.25." << endl;
    fileOut << "\t\t 4. Americano for $2.75. " << endl;
    fileOut << "\t\t 5. Nevermind. " << endl;
    fileOut << "\t\t Please enter your choice: " << endl;

    fileOut.close();

    string lName[INFO_SIZE]= {"Pham", "Luo", "Park", "Ohkawara", "Capps", "Suk", "Schomburg" };
    string fName[INFO_SIZE] = {"Lynda", "Roger", "Jongwon", "Shouichi", "Dan", "Jae", "Lacey"};
    string phoneNumber[INFO_SIZE] = {"206-555-1111", "206-555-2222", "206-555-3333", "206-555-4444", "206-555-5555", "206-555-6666", "206-555-7777"};
    string birthDay[INFO_SIZE] = {"1-11-99", "2-22-99", "3-33-99", "4-44-99", "5-55-99", "6-66-99", "7-77-99"};
    float amountInAccount[INFO_SIZE] = {21.00, 17.00, 22.00, 20.00, 5.00, 132.00, 25.00};
    int totalRewards[INFO_SIZE] = {1, 2, 3, 4, 5, 6, 7};

    //Print out welcome
    cout << "Welcome to the Coffee Stand" << endl << endl;

    //Gather information and assign to variables
    accountAnswer = verifyAccount();

    while (accountAnswer != 'Y' && accountAnswer != 'y' && accountAnswer != 'N' && accountAnswer != 'n')
    {
        cout << "That was not one of the choices." << endl;
        accountAnswer = verifyAccount();
    }
    if(accountAnswer == 'Y' || accountAnswer == 'y')
    {
        cout << "Please enter your last name: " << endl << endl;
        cin >> enterLastName;
        int index = linearSearch(lName, INFO_SIZE, enterLastName);
        lastName = lName[index];
        firstName = fName[index];
        number = phoneNumber[index];
        birthday = birthDay[index];
        account = amountInAccount[index];
        reward = totalRewards[index];
    }
    else
    {
        //Customer last name
        lastName = lname();

        //Customer first name
        firstName = fname();

        //Customer phone number
        number = cellNumber();

        //Customer birthday
        birthday = bDay();

        //Customer account
        getAccountAmount(account);

        //Customer favorite drink
        cout << "Enter your favorite drink: " << endl << endl;
        getline(cin, favDrink);

        //Customer rewards
        reward = customerRewards();


    }

    //ARRAY
    string customerInfo[SIZE] = {lastName, firstName, number, birthday};
    cout << "Here is the information that you have entered: " << endl;
    for(count=0;count<SIZE;count++)
    {
        cout << customerInfo[count] << endl;
    }
    cout << "Your account balance is $" << setprecision(2) << showpoint << fixed << account << endl;
    cout << "You have " << reward << " rewards." << endl;
    //END OF ARRAY SECTION



    drinkAnswer = drinkAnswerFunction();
    while(drinkAnswer < 0 || drinkAnswer > 2)
    {
        drinkAnswer = drinkAnswerValidation();
    }
    if(drinkAnswer == 1)
    {
//        ifstream fileIn;
//        fileIn.open("menu.txt");
//        string str;
//        while(getline(fileIn, str))
//        {
//            cout << str <<endl;
//        }
//        fileIn.close();
//        cin >> menuChoice;
//        while(menuChoice < 0 || menuChoice > 5)
//        {
//            cout << "That was an invalid choice." << endl;
//            while(getline(fileIn, str))
//            {
//                cout << str <<endl;
//            }
//            fileIn.close();
//            cin >> menuChoice;
//        }

        //PARALLEL ARRAY
        string nameOfDrink[DRINKS_SIZE] = {"Mocha", "Espresso", "Latte", "Americano"};
        float priceOfDrink[DRINKS_SIZE] = {4.25, 2.00, 3.25, 2.75};
        cout << "Our drink menu is: " << endl;
        for (int index=0;index<DRINKS_SIZE;index++)
        {
            cout << index +1 << ". " << nameOfDrink[index] << " for $" << priceOfDrink[index] << "." << endl;
        }
        cout << "5. Nevermind." << endl;
        cout << "Please enter your choice: " << endl;
        cin >> menuChoice;
        //END OF PARALLEL ARRAY

        //Logic for menu
        if(menuChoice == 1)
        {
            drinkChoice = drink(nameOfDrink[0]);
            drinkPrice = drink(priceOfDrink[0]);
        }

        else if(menuChoice == 2)
        {
            drinkChoice = drink(nameOfDrink[1]);
            drinkPrice = drink(priceOfDrink[1]);
        }

        else if(menuChoice == 3)
        {
            drinkChoice = drink(nameOfDrink[2]);
            drinkPrice = drink(priceOfDrink[2]);
        }

        else if(menuChoice == 4)
        {
            drinkChoice = drink(nameOfDrink[3]);
            drinkPrice = drink(priceOfDrink[3]);
        }
        else if(menuChoice == 5)
        {
            cout << "Enjoy your day!" << endl << endl;
        }

        cout << "You have ordered a " << drinkChoice << ", which costs $" << drinkPrice << "." << endl;
        //Add tip (uses multiplication and addition)
        cout << "Select which tip you would like to add: A) 15% B) 10% C) 0%:  " << endl << endl;
        cin >> tipAnswer;
        if (tipAnswer == 'A' || tipAnswer == 'a')
        {
            tipA *= drinkPrice;
            drinkPrice += tipA;
            cout << "Thank you, " << firstName << endl << endl;
            cout << "Your new total is: $" << setprecision(2) << showpoint << fixed << drinkPrice << endl << endl;
        }
        else if (tipAnswer == 'B' || tipAnswer == 'b')
        {
            tipB *= drinkPrice;
            drinkPrice += tipB;
            cout << "Thank you, " << setprecision(2) << firstName << endl << endl;
            cout << "Your new total is: $" << setprecision(2) << showpoint << fixed << drinkPrice << endl << endl;
        }
        else
        {
            cout << "Thank you" << endl << endl;
        }
        cout << "We are subtracting your purchase from your account" << endl << endl;
        account -= drinkPrice;
        cout << "Your new account balance is $" << setprecision(2) << showpoint << fixed << account << endl << endl;
    }
    else if (drinkAnswer == 2)
    {
        cout << "Our records show that your favorite drink is a " << favDrink << " and the price of that drink is $" << favDrinkPrice << endl << endl;
        //Add tip (uses multiplication and addition)
        cout << "Select which tip you would like to add: A) 15% B) 10% C) 0%:  " << endl << endl;
        cin >> tipAnswer;
        if (tipAnswer == 'A' || tipAnswer == 'a')
        {
            tipA *= favDrinkPrice;
            favDrinkPrice += tipA;
            cout << "Thank you, " << firstName << endl << endl;
            cout << "Your new total is: $" << setprecision(2) << showpoint << fixed << favDrinkPrice << endl << endl;
        }
        else if (tipAnswer == 'B' || tipAnswer == 'b')
        {
            tipB *= favDrinkPrice;
            favDrinkPrice += tipB;
            cout << "Thank you, " << setprecision(2) << firstName << endl << endl;
            cout << "Your new total is: $" << setprecision(2) << showpoint << fixed << favDrinkPrice << endl << endl;
        }
        else
        {
            cout << "Thank you" << endl << endl;
        }
        cout << "We are subtracting your purchase from your account" << endl << endl;
        account -= favDrinkPrice;
        cout << "Your new account balance is $" << setprecision(2) << showpoint << fixed << account << endl << endl;
    }

    else
    {
        cout << "Enjoy your day!" << endl << endl;
    }

    //Add money to account (Uses addition)
    cout << "Would you like to add to your account? Please type Y for yes and N for no: " << endl << endl;
    cin >> answerAddToAccount;
    while (answerAddToAccount != 'Y' && answerAddToAccount != 'y' && answerAddToAccount != 'N' && answerAddToAccount != 'n')
    {
        cout << "That was not one of the choices." << endl;
        cout << "Would you like to add to your account?" << endl << endl;
        cin >> answerAddToAccount;
    }
    if(answerAddToAccount == 'Y' || answerAddToAccount == 'y')
    {
        cout << "Please enter the amount you would like to add to your account: " << endl << endl;
        cin >> addAmount;
        account += addAmount;
        cout << "Your new account balance is $" << setprecision(2) << showpoint << fixed << account << endl;
    }
    else
    {
        cout << "Ok. Your account balance is: " << account << endl << endl;
    }


    //Display console
    system("pause");
    return 0;
}
string lname()
{
    string name;
    cout << "Please enter your last name: " << endl << endl;
    getline(cin, name);
    return name;
}

string fname()
{
    string name;
    cout << "Please enter your first name: " << endl << endl;
    getline(cin, name);
    return name;

}

string bDay()
{
    string day;
    cout << "Please enter your birthday: " << endl << endl;
    getline(cin, day);
    return day;
}

string cellNumber()
{
    string cell;
    cout << "Please enter your cell phone number: " << endl << endl;
    getline(cin, cell);
    return cell;
}

int drinkAnswerValidation()
{
    int answer;
    cout << "That was an incorrect choice." << endl << endl;
    cout << "Would you like to see our menu or purchase your favorite drink? \n \n "
         << "\t 1. See menu \n"
         << "\t 2. Purchase favorite drink \n"
         << "Enter your choice: ";
    cin >> answer;
    return answer;
}

int drinkAnswerFunction()
{
    int answer;
    cout << "Would you like to see our menu or purchase your favorite drink? \n \n "
         << "\t 1. See menu \n"
         << "\t 2. Purchase favorite drink \n"
         << "Enter your choice: ";
    cin >> answer;
    return answer;
}

int customerRewards(int reward)
{

    cout << "You currently have " << reward  << " customer rewards." << endl << endl;

    //Add to reward for signing up (Uses addition)
    cout << "Thank you for signing up! As a thank you, we are going to add to your rewards." << endl << endl;
    reward = reward + 1;

    cout << "Your rewards are now: " << reward << endl << endl;
    return reward;
}

void getAccountAmount(float &userAccount)
{
    cout << "Enter how much you would like to add to your initial account: $ " << endl << endl;
    cin >> userAccount;
}

string drink(string drinkName)
{
    string choice;
    choice = drinkName;
    return choice;
}

float drink(float drinkAmount)
{
    float choice;
    choice = drinkAmount;
    return choice;
}

char verifyAccount()
{
    char answer;
    cout << "Are you already a customer?" << endl;
    cout << "Please enter Y for yes or N for no: " << endl;
    cin >> answer;
    return answer;
}

int linearSearch(const string a[], int numberElements, string value)
{
    bool found = false;
    int index = 0;
    int position = -1;

    while (index < numberElements && !found)
    {
        if (a[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}

