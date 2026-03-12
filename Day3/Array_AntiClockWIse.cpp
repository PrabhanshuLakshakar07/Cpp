#include<iostream>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50};
	int size=5,temp,n,j,index;
	cout<<"\nArray has:";
	for(index=0;index<size;index++)//index from 1 as 0th is ref
    {
		cout<<a[index]<<" ";
	}
	cout<<"\nEnter n:";
	cin>>n;
	
	while(n>0)//rotate for n times
	{
	    temp=a[size-1];
		for(j=size-1;j<size;j--)
        //shifting Anti-clockwise
	    {
			a[j]=a[j-1];
		}
		a[0]=temp;

		cout<<"\nArray has:";
		for(index=0;index<size;index++)//print
	    {
			cout<<a[index]<<" ";
              
		}
		n--;
	}
	return 0;
}
