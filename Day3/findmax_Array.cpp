#include<iostream>
using namespace std;
int main()
{
	int a[100],index,size,max,max_position;
	cout<<"Enter size:";
	cin>>size;
	cout<<"\nEnter "<<size<<" elements";
	for(index=0;index<size;index++)//index<=size-1
    {
		cout<<"\nEnter element at ["<<index<<"]:";
		cin>>a[index];
	}
	//build ref
	max=a[0];
	max_position=0;
	
	for(index=1;index<size;index++)//index from 1 as 0th is ref
    {
		if(a[index]>max)
		{
			max=a[index];
			max_position=index;
		}
	}
	cout<<"\nMax is "<<max<<" at index ["<<max_position<<"].";
		
	return 0;
}
