#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Hollow Diamond Star Pattern of size " << n << ":\n";
    cin >> n;
    

    int mid = n / 2 + 1;

   
    for (int i = 1; i <= mid; i++)
    {
        for (int s = 1; s <= mid - i; s++)
            cout << " ";

        int width = 2 * i - 1;

        for (int j = 1; j <= width; j++)
        {
            if (j == 1 || j == width)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    
    for (int i = mid - 1; i >= 1; i--)
    {
        for (int s = 1; s <= mid - i; s++)
            cout << " ";

        int width = 2 * i - 1;

        for (int j = 1; j <= width; j++)
        {
            if (j == 1 || j == width)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}