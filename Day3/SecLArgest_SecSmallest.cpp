#include<iostream>
using namespace std;
int main()
{
	int a[]={44,11,66,22,33,55,99,77,88};
	int index,size=9,temp,i,j;
	cout<<"\nArray has:";
	for(index=0;index<size;index++)//index from 1 as 0th is ref
    {
		cout<<a[index]<<" ";
	}
	//sorting:bubble
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[j+2])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
    cout<<"\nNow Array has:";
	for(index=0;index<size;index++)//index from 1 as 0th is ref
    {
		cout<<a[index]<<" ";
       
	}
		 cout<<"\nSecond Largest is "<<a[size-2]<<" at index ["<<size-2<<"].";
        cout<<"\nSecond Smallest is "<<a[1]<<" at index ["<<1<<"].";
	return 0;
}
