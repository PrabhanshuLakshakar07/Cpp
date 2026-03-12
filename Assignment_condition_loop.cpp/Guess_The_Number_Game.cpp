#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int guess;
    int secret = 42;
    int tries = 0;
cout<<"enter the guess value";
    while (true)
    {
        cin >> guess;
        tries++;

        if (guess == secret)
        {
            cout << "Correct! Got it in " << tries << " tries!";
            break;
        }

        int diff = abs(secret - guess);

        if (diff <= 10)
            cout << "HOT! ";
        else if (diff > 20)
            cout << "COLD! ";
        else
            cout << "WARM! ";
    }

    return 0;
}
