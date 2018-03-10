//Creator: Dan Capps
//Date Created: 10.8.2017
//Assignment: 3
//Time spent: 1 hour

#include <iostream>
#include <string>

using namespace std;

int main() {

    //Initialize variables
    string name;
    string age;
    string city;
    string college;
    string profession;
    string animal;
    string pet;

    //Ask user for information
    cout << "Please enter your name: " << endl;
    getline(cin, name);

    cout << "Please enter your age: " << endl;
    getline(cin, age);

    cout << "Please enter your the name of a city: " << endl;
    getline(cin, city);

    cout << "Please enter the name of a college: " << endl;
    getline(cin, college);

    cout << "Please enter a profession: " << endl;
    getline(cin, profession);

    cout << "Please enter a type of animal: " << endl;
    getline(cin, animal);

    cout << "Please enter a pet's name: " << endl;
    getline(cin, pet);

    //Display story
    cout << "There once was a person, named " << name << " who lived in " << city << "." << endl;
    cout << " At the age of " << age << ", " << name << " went to the college at " << college << ". " << name
         << " graduated and went to work as a " << profession << endl;
    cout << "Then, " << name << " adopted a(n) " << animal << " named " << pet << ". " << endl;
    cout << "They both lived happily ever after!" << endl;

    //Display console
    system("pause");
    return 0;
}