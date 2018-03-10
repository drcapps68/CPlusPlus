#include <iostream>
#include <iomanip>

using namespace std;

void assignStudents2Array(string[], int);
void assignScores2Array(string[], double[], int);
double calculateAverage(double[], int);

int main() {

    const int STUDENTS = 5; //rows
    const int GRADES = 5; //columns
    const int SCORES = 4;

    string students[STUDENTS];
    char grade[GRADES];
    double scores[SCORES];
    int count;
    double average;

    assignStudents2Array(students, STUDENTS);

    assignScores2Array(students, scores, SCORES);

    average = calculateAverage(scores, SCORES);

    for (count = 0; count < STUDENTS; count++)
    {
        cout << "The grade average for " << students[count] << " is: " << average << endl;
    }

    cout << endl;

    //Display console
    system("pause");
    return 0;
}

void assignStudents2Array(string student[], int totalStudents)
{
    int count;
    for (count = 0; count < totalStudents; count++)
    {
        cout << "Please enter the name of student " << (count +1) << ": " << endl;
        cin >> student[count];

    }
}

void assignScores2Array(string student[], double scores[], int totalScores)
{
    int count;
    for (count = 0; count < totalScores; count++)
    {
        while(scores[count] < 0 || scores[count] > 100)
        {
            cout << "You have entered an incorrect grade!" << endl;
            cin >> scores[count];
        }

        cout << "Enter the score " << (count+1) << " for " << student[count] << ": ";
        cin >> scores[count];
    }
}

double calculateAverage(double scores[], int scoreTotal)
{
    int count;
    double average, sum;
    average = sum / scoreTotal;
    for (count = 0; count < scoreTotal; count++)
    {
        sum += scores[count];
    }
    return average;
}