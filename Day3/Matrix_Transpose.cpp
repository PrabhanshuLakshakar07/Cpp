#include<iostream>
using namespace std;

int main()
{
    int m[10][10], rows, columns, r, c;

    cout<<"Enter number of rows and number of columns in matrix.\n";
    cin>>rows>>columns;

    // Input
    for(r=0;r<rows;r++)
    {
        for(c=0;c<columns;c++)
        {
            cout<<"\nEnter element at ["<<r<<"]["<<c<<"]:";
            cin>>m[r][c];
        }
    }

    cout<<"\nMatrix has:\n";
    for(r=0;r<rows;r++)
    {
        for(c=0;c<columns;c++)
        {
            cout<<m[r][c]<<"\t";
        }
        cout<<"\n";
    }

    cout<<"\nTranspose has:\n";

    // ✅ Correct transpose print
    for(r=0;r<columns;r++)
    {
        for(c=0;c<rows;c++)
        {
            cout<<m[c][r]<<"\t";   
        }
        cout<<"\n";
    }

    return 0;
}