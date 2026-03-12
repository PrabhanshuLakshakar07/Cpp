#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of elements: ";
    cin>>N;

    int x;
    int max1 = -1e9, max2 = -1e9;

    for(int i=0;i<N;i++)
    {
        cin>>x;

        if(x > max1)
        {
            max2 = max1;
            max1 = x;
        }
        else if(x > max2 && x != max1)
        {
            max2 = x;
        }
    }

    cout<<"Second Largest: "<<max2;
}