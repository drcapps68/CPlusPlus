//Creator: Dan Capps
//Date Created: 10.8.2017
//Assignment: 3
//Time spent: 1 hour

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //Initialize variables
    int scoreTotal = 5;
    float score1;
    float score2;
    float score3;
    float score4;
    float score5;
    float average;

    //Ask for 5 test scores
    cout << "Enter the first test score to calculate: " << endl <<endl;
    cin >> score1;

    cout << "Enter the second test score to calculate: " << endl <<endl;
    cin >> score2;

    cout << "Enter the third test score to calculate: " << endl <<endl;
    cin >> score3;

    cout << "Enter the fourth test score to calculate: " << endl <<endl;
    cin >> score4;

    cout << "Enter the fifth test score to calculate: " << endl <<endl;
    cin >> score5;

    //Calculate average test score
    average = score1 + score2 + score3 + score4 + score5;
    average /= scoreTotal;

    //Display average score

    cout << "The average for these " << scoreTotal << " tests is " << setprecision(1) << average << endl;

    //Display console
    system("pause");
    return 0;
}