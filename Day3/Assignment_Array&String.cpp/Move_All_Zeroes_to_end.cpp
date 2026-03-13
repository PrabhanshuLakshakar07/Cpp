#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;

    int a[100];

    for(int i=0;i<n;i++)
        cin >> a[i];

    int pos = 0;

    for(int i=0;i<n;i++)
    {
        if(a[i] != 0)
        {
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
            pos++;
        }
    }

    for(int i=0;i<n;i++)
        cout << a[i] << " ";

    return 0;
}