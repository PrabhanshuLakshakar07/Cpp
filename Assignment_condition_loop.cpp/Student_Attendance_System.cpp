#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the marks of 5 students (out of 7) : " << endl;

    for (int i = 1; i <= 5; i++)   
    {
        int sum = 0;

        for (int j = 1; j <= 7; j++)   
        {
            cin >> a;
            sum = sum + a;
        }

        double percent = (sum / 7.0) * 100;

        cout << "Student " << i << ": " << percent << "% | ";

        if (percent >= 75)
            cout << "Eligible";
        else
            cout << "Detained Risk!";

        cout << endl;
    }

    return 0;
}