#include <iostream>
using namespace std;

int main()
{
    int days_late, book_type;
    cout << "Enter the number of days late and book type (1 for fiction, 2 for non-fiction, 3 for others) : ";
    cin >> days_late >> book_type;

    int rate;

    if (book_type == 1)
        rate = 5;
    else if (book_type == 2)
        rate = 10;
    else
        rate = 2;

    int fine = days_late * rate;

    // cap logic
    if (fine > 500)
        fine = 500;

    cout << "Fine Amount: Rs. " << fine;

    return 0;
}