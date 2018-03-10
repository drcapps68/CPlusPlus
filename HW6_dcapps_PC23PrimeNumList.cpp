#include <iostream>

using namespace std;

bool isPrime(int);

int main() {

    isPrime();

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

bool isPrime()
{
    for(int j=2;j<=100;++j)
    {
        int i=2;
        for(;i<=j-1;i++)
        {
            if(j%i == 0)
                break;
        }

        if(i==j && i != 2)
            cout<<j<<endl;
    }
}