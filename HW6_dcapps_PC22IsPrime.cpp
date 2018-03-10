#include <iostream>

using namespace std;

bool isPrime(int);

int main() {

    int num;
    bool check;

    cout << "Enter any positive number: " << endl;
    cin >> num;

    check = isPrime(num);

    if(check == true)
    {
        cout << num << " is a prime number" << endl;
    }else{
        cout << num << " is a prime number" << endl;
    }

    //Display console
    system("pause");
    return 0;
}

bool isPrime(int num)
{
    bool check = true;

    for(int i=2; i<=num; i++)
    {
        if(num % i == 0)
        {
            check = false;
        }
    }
    return check;
}