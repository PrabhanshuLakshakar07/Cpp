#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";

    cin >> n;

    int a[100];

    for(int i=0;i<n;i++)
        cin >> a[i];

  
    for(int i=0;i<n;i++)
    {
        bool Duplicate = false;

     for(int j=0;j<i;j++)
        {
            if(a[i] == a[j])
            {
                Duplicate = true;
                break;
            }
        }

        if(!Duplicate)
            cout << a[i] << " ";
    }

    return 0;
}