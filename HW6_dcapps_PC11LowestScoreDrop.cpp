#include <iostream>
#include <iomanip>

using namespace std;
void getScore(int);
void calcAverage(int, int, int, int, int);

int main() {

    int score1, score2, score3, score4, score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);


    system("pause");
    return 0;
}

void getScore(int &score)
{
    cout << "Please enter a test score: ";
    cin >> score;

    while (score<1||score>100)
    {
        cout << "You have entered an invalid test score.";
        cout << "Please enter a test score: ";
        cin >> score;
    }
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    int findLowest(int, int, int, int, int, int);
    int lowestScore;
    double average;

    findLowest(score1, score2, score3, score4, score5, lowestScore);

    average = (((float)score1 + score2 + score3 + score4 + score5) - lowestScore)/4.0;
    cout << setw(4) << fixed << showpoint << setprecision(2);
    cout << "The average of the highest test scores entered is: " << average << endl;

}

int findLowest(int score1, int score2, int score3, int score4, int score5, int lowestScore)
{
    lowestScore = score1;
    if (score2 < lowestScore)
    {
        lowestScore = score2;
    }
    else if(score3 < lowestScore)
    {
        lowestScore = score3;
    }
    else if(score4 < lowestScore)
    {
        lowestScore = score4;
    }
    else if(score5 < lowestScore)
    {
        lowestScore = score5;
    }

    cout << "The lowest test score is " << lowestScore << " ." << endl;

    return lowestScore;
}