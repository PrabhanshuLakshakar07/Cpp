#include <iostream>
using namespace std;

int main()
{
    int L,R;
    cout << "Enter the range (L R) to find prime numbers: ";
    cin>>L>>R;

    for(int num=L; num<=R; num++)
    {
        if(num < 2) continue;

        bool prime = true;

        for(int i=2; i*i<=num; i++)
        {
            if(num%i==0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
            cout<<num<<" ";
    }
}