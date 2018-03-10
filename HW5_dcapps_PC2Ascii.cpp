/*
 * Creator: Dan Capps
 * Date created: 10.18.2017
 * Assignment: HW 5 PC 2
 * Time spent: 45 min
 */

#include <iostream>

using namespace std;

int main() {

    //Initialize variables
    int code = 0;
    char ascii;

    //Use a loop to display the characters for the ASCII codes 0 - 127
    while(code >= 0 && code <= 127)
    {
        //Display 16 characters on each line
        ascii = code;
        cout << ascii << endl;
        code++;
    }

    //Display console
    system("pause");
    return 0;
}