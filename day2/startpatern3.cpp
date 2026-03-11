#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=7;i=i+2){
       for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n"; 
    }
    for(int i=5;i>=1;i=i-2){
       for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n"; 
    }
    
	return 0;
}