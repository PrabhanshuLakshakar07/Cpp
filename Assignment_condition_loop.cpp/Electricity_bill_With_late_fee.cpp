#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     int units, overdue_days;
    cin >> units >> overdue_days;

    double base = 0;

    if (units <= 100)
        base = units * 3.5;
    else if (units <= 300)
        base = 100 * 3.5 + (units - 100) * 5;
    else
        base = 100 * 3.5 + 200 * 5 + (units - 300) * 7;

    double late_fee = 0;

    if (overdue_days > 15)
        late_fee = base * 0.02;

    double total = base + late_fee;

    cout << "Base: Rs." << base
         << " | Late Fee: Rs." << late_fee
         << " | Total: Rs." << total;

    return 0;
}