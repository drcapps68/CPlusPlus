//Creators: Dan Capps, Jongwon Park, Roger Luo, and Shouichi Ohkawara
//Date created: 10.17.2017
//Assignment number: 4
//Time spent: 8 hours total

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	// menu
	const int kNumberOfDrink = 7;
	const string drinkNames[kNumberOfDrink] = {
		"espresso",
		"cappuccino",
		"americano",
		"mocha",
		"tea",
		"soda",
		"water"
	};
	const float drinkPrices[kNumberOfDrink] = {
		3.5,
		4.5,
		3.2,
		4.0,
		2.0,
		2.0,
		100.0
	};

	//Initialize variables
	string lastName;
	string firstName;
	string number;
	string birthday;
	string answerAddToAccount;
	float account;
	float addAmount;
	float purchase;
	string favDrink;
	const float favDrinkPrice = 4.25;
	int choice;
	int orderIndex = -1;
	int reward = 0;
	char tipAnswer;
	const float tipA = .15;
	const float tipB = .10;

	//Print out welcome
	cout << "Welcome to the Coffee Stand! (You can use Guest Mode by entering !GUEST as your last name)" << endl << endl;

	//Gather information and assign to variables

	//Customer last name
	cout << "Please enter your last name: " << endl << endl;
	getline(cin, lastName);

	if (lastName == "!GUEST") // guest mode for dev
	{
		lastName = firstName = "GUEST";
		number = "000-0000-0000";
		birthday = "Jan 1, 1800";
		account = 10000.f;
		favDrink = "beer";
	}
	else // normal mode
	{
		//Customer first name
		cout << "Please enter your first name: " << endl << endl;
		getline(cin, firstName);

		//Customer phone number
		cout << "Please enter your cell phone number: " << endl << endl;
		getline(cin, number);

		//Customer birthday
		cout << "Please enter your birthday: " << endl << endl;
		getline(cin, birthday);

		//Customer account
		cout << "Enter how much you would like to add to your initial account: $ " << endl << endl;
		cin >> account;
		cin.ignore();

		//Customer favorite drink
		cout << "Enter your favorite drink: " << endl << endl;
		getline(cin, favDrink);
		cout << "Our records show that your favorite drink is a " << favDrink << " and the price of that drink is $" << favDrinkPrice << endl << endl;

		//Customer rewards
		cout << "You currently have " << reward << " customer rewards." << endl << endl;

		//Add to reward for signing up (Uses addition)
		cout << "Thank you for signing up! As a thank you, we are going to add to your rewards." << endl << endl;
		reward = reward + 1;

		cout << "Your rewards are now: " << reward << endl << endl;
	}

	// commend before ordering
	cout << "Would you like to see our menu or purchase your favorite drink? \n \n "
		<< "\t 1. See menu \n"
		<< "\t 2. Purchase your favorite drink \n"
		<< "\t Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
		case 1: // show menu
		{
            cout << setprecision(2) << fixed;
			cout << "\n\t Our drink menu is: \n";
	
			// rewrite below after we learn for statement #todo
			cout << "\t\t 1. " << drinkNames[0] << ": $" << drinkPrices[0] << " \n";
			cout << "\t\t 2. " << drinkNames[1] << ": $" << drinkPrices[1] << " \n";
			cout << "\t\t 3. " << drinkNames[2] << ": $" << drinkPrices[2] << " \n";
			cout << "\t\t 4. " << drinkNames[3] << ": $" << drinkPrices[3] << " \n";
			cout << "\t\t 5. " << drinkNames[4] << ": $" << drinkPrices[4] << " \n";
			cout << "\t\t 6. " << drinkNames[5] << ": $" << drinkPrices[5] << " \n";
			cout << "\t\t 7. " << drinkNames[6] << ": $" << drinkPrices[6] << " \n";
			cout << "\t\t 8. " << favDrink << ": $" << favDrinkPrice << " \n"; // user's favorite

			cin >> orderIndex;
			break;
		}
		case 2: // favorite order
		{
			orderIndex = kNumberOfDrink + 1;
			break;
		}
		default: // invalid order
		{
			orderIndex = -1;
		}
	}

	// specify user's order
	string drinkName;
	float drinkPrice;
	if (orderIndex <= 0 || kNumberOfDrink + 1 < orderIndex) // wrong order
	{
		cout << "Enjoy your day!" << endl << endl;
		system("pause");
		return 0;
	}
	else if (orderIndex != kNumberOfDrink + 1) // user ordered one in our menu
	{
		int i = orderIndex - 1;
		drinkName = drinkNames[i];
		drinkPrice = drinkPrices[i];
	}
	else // user ordered his favorite one
	{
		drinkName = favDrink;
		drinkPrice = favDrinkPrice;
	}

	//Add tip (uses multiplication and addition)
	float totalPayment = drinkPrice;
	cout << "Select which tip you would like to add: A) 15% B) 10% C) 0%:  " << endl << endl;
	cin >> tipAnswer;
	cin.ignore();
	if (tipAnswer == 'A' || tipAnswer == 'a')
	{
		totalPayment += drinkPrice * tipA;
	}
	else if (tipAnswer == 'B' || tipAnswer == 'b')
	{
		totalPayment += drinkPrice * tipB;
	}

	// if user pay some tips, add user's first name to "Thank you"
	if (totalPayment > drinkPrice)
	{
		cout << "Thank you, " << firstName << endl << endl;
	}
	else
	{
		cout << "Thank you" << endl << endl;
	}

	cout << "Your final total is: $" << setprecision(2) << showpoint << fixed << totalPayment << endl << endl;
	cout << "We are subtracting your purchase from your account" << endl << endl;
	account -= totalPayment;
	cout << "Your new account balance is $" << setprecision(2) << showpoint << fixed << account << endl << endl;

	//Add money to account (Uses addition)

	cout << "Would you like to add to your account?(y/n)" << endl << endl;
	getline(cin, answerAddToAccount);
	if (answerAddToAccount == "Y" || answerAddToAccount == "y")
	{
		cout << "Please enter the amount you would like to add to your account: " << endl << endl;
		cin >> addAmount;
		if (addAmount >= 0.f)
		{
			account += addAmount;
			cout << "Your new account balance is $" << setprecision(2) << showpoint << fixed << account << endl;
		}
		else
		{
			cout << "Sorry, you cannot payback here" << endl;
		}
	}
	else
	{
		cout << "Ok. Your account balance is: " << account << endl << endl;
	}


	//Display console
	system("pause");
	return 0;
}
