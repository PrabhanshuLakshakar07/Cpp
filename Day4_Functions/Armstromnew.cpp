#include<iostream>
#include<cmath>
using namespace std;

bool is_armstrong(int number)
{
    int tno = number;
    int digit;
    int sum = 0;

    while(tno > 0)
    {
        digit = tno % 10;
        tno = tno / 10;
        sum = sum + pow(digit, 3);
    }

    return (sum == number);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(is_armstrong(number))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}