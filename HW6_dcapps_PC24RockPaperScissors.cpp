#include <iostream>
#include <ctime>

using namespace std;

int userChoice();
int computo();
void win();
void loss();
void tie();

int main() {

    int user;
    int compChoice;

    user = userChoice();
    compChoice = computo();

    if(user == compChoice)
    {
        tie();
    }
    if(user == 1)
    {
        if (compChoice == 2)
        {
            loss();
        }
        else if(compChoice == 3)
        {
            win();
        }
    }
    else if (user == 2)
    {
        if (compChoice == 1)
        {
            win();
        }
        else if(compChoice == 3)
        {
            loss();
        }
    }
    else if (user == 3)
    {
        if(compChoice == 1)
        {
            loss();
        }
        else if(compChoice == 2)
        {
            win();
        }
    }

    cout << "Thank you for playing" << endl;

    //Display console
    system("pause");
    return 0;
}

int userChoice()
{
    int choice;

    cout << "1 - Rock" << endl;
    cout << "2 - Paper" << endl;
    cout << "3 - Scissors" << endl;
    cout << "Please pick one: " << endl;
    cin >> choice;


    if(choice == 1)
    {
        cout << "You picked Rock." << endl;
    }
    else if(choice == 2)
    {
        cout << "You picked Paper." << endl;
    }
    else if(choice == 3)
    {
        cout << "You picked Scissors." << endl;
    }
    else
    {
        cout << "That is an invalid entry." << endl;
        cout << "Please choose either 1, 2, or 3" << endl;
        cin >> choice;
    }

    return choice;
}

int computo()
{
    int computoChoice = (rand() % 3) + 1;

    if(computoChoice == 1)
    {
        cout << "Computo picked Rock." << endl;
    }
    else if(computoChoice == 2)
    {
        cout << "Computo picked Paper." << endl;
    }
    else if(computoChoice == 3)
    {
        cout << "Computo picked Scissors." << endl;
    }

    return computoChoice;
}

void win()
{
    cout << "You win." << endl;
}

void loss()
{
    cout << "You lose" << endl;
}

void tie()
{
    cout << "You tied with Computo" << endl;
}