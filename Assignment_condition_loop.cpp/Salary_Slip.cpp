#include <iostream>
using namespace std;

int main()
{
    double gross;
    cout << "Gross Salary In Rupees :- ";
    cin >> gross;

    double tax = 0;

    if (gross <= 300000)
    {
        tax = 0;
    }
    else if (gross <= 600000)
    {
        tax = (gross - 300000) * 0.05;
    }
    else if (gross <= 1000000)
    {
        tax = (300000 * 0.05) + (gross - 600000) * 0.20;
    }
    else
    {
        tax = (300000 * 0.05) + (400000 * 0.20) + (gross - 1000000) * 0.30;
    }

    double net = gross - tax;

    cout << "Gross: " << gross
         << " | Tax: " << tax
         << " | Net: " << net;

    return 0;
}