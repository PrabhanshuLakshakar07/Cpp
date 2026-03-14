#include <iostream>
using namespace std;

float average(int arr[], int n)
{
    int sum=0;

    for(int i=0;i<n;i++)
        sum+=arr[i];

    return (float)sum/n;
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Average: ";
    cout<<average(arr,n);
}