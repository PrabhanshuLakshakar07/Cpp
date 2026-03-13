#include <iostream>
using namespace std;

int main()
{
    int n,m;

    cout<<"Enter the number of elements in first array: ";

    cin>>n;

    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter the number of elements in second array: ";
    cin>>m;

    int b[100];
    for(int i=0;i<m;i++)
        cin>>b[i];

    bool foundAny = false;

    for(int i=0;i<n;i++)
    {
        if(a[i]==-1) continue; 

        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                foundAny = true;
                a[i] = -1;  
                break;
            }
        }
    }

    if(!foundAny)
        cout<<"No common elements";
} 