#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number N for FizzBuzz: ";
    cin >> N;

    for(int i=1;i<=N;i++)
    {
        if(i%3==0 && i%5==0)
            cout<<"FizzBuzz";
        else if(i%3==0)
            cout<<"Fizz";
        else if(i%5==0)
            cout<<"Buzz";
        else
            cout<<i;

        cout<<" ";
    }
}