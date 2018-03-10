#include <iostream>
#include <fstream>

using namespace std;

int main() {

    const int SIZE = 20;
    const float PASS = .70;
    char correct[SIZE];
    char student[SIZE];
    int count = 0;
    int accurate = 0;
    int inaccurate = 0;
    float total = 0.0;
    ifstream inputFileCorrect;
    ifstream inputFileStudent;

    inputFileCorrect.open("CorrectAnswer.txt");
    inputFileStudent.open("StudentAnswer.txt");

    while (count < SIZE && inputFileCorrect >> correct[SIZE] && inputFileStudent >> student[SIZE])
    {
        count++;
    }

    inputFileCorrect.close();
    inputFileStudent.close();

    for (int i = 0; i < SIZE; i++)
    {
        if (correct[i] == student[i])
        {
            accurate++;
        }
        else
        {
            inaccurate++;
            cout << "You answered " << student[i] << endl;
            cout << "The correct answer is " << correct[i] << endl;
        }
    }

    total = accurate/SIZE;
    if (total < PASS)
    {
        cout << "You failed the exam." << endl;
    }
    else
    {
        cout << "You passed the exam!" << endl;
    }
    //Display console
    system("pause");
    return 0;
}