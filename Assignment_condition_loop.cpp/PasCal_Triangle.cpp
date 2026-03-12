#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin>>n;

    int a[50][50];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}