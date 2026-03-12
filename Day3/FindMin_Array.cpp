#include<iostream>
using namespace std;
int main()
{
	int a[100],index,size,min,min_position;
	cout<<"Enter size:";
	cin>>size;
	cout<<"\nEnter "<<size<<" elements";
	for(index=0;index<size;index++)//index<=size-1
    {
		cout<<"\nEnter element at ["<<index<<"]:";
		cin>>a[index];
	}
	//build ref
	min=a[0];
	min_position=0;
	
	for(index=1;index<size;index++)//index from 1 as 0th is ref
    {
		if(a[index]<min)
		{
			min=a[index];
			min_position=index;
		}
	}
	cout<<"\nMin is "<<min<<" at index ["<<min_position<<"].";
		
	return 0;
}
