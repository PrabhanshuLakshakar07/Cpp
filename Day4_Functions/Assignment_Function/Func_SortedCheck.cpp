#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[100];

    cout<<"Enter the elements of array: ";

    for(int i=0;i<n;i++)
        cin>>arr[i];

cout<<"Is the array sorted? ";
    if(isSorted(arr,n))
        cout<<"Yes";
    else
        cout<<"No";
}