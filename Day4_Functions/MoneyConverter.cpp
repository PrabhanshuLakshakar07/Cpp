#include <iostream>
using namespace std;

//INR to USD function
float INR_to_USD(float inr)
{
    return (inr / 90.0);
}

//USD to INR function
float USD_to_INR(float usd)
{
    return (usd * 90.0);
}

int main()
{
    int choice;
    float amount, result;

    do
    {
        cout << "\n===== Currency Converter =====\n";
        cout << "1. INR to USD\n";
        cout << "2. USD to INR\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter amount in INR: ";
            cin >> amount;

            result = INR_to_USD(amount);

            cout << "USD = " << result << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter amount in USD: ";
            cin >> amount;

            result = USD_to_INR(amount);

            cout << "INR = " << result << endl;
        }
        else if(choice == 0)
        {
            cout << "Thank you. Program exiting.\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 0);

    return 0;
}
