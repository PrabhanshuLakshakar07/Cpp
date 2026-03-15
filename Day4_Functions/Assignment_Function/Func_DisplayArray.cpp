#include <iostream>
using namespace std;

void displayArray(int arr[], int n)
{
    cout<<"Array: ";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\nSize: "<<n;
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
cout<<"Displaying array: \n";
    displayArray(arr,n);
}