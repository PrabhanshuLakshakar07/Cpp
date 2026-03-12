#include<iostream>
using namespace std;
int main()
{
	int a[100],index,size;
	cout<<"Enter size:";
	cin>>size;
	cout<<"\nEnter "<<size<<" elements";
	for(index=0;index<size;index++)//index<=size-1
    {
		cout<<"\nEnter element at ["<<index<<"]:";
		cin>>a[index];
	}
	cout<<"\nEntered "<<size<<" elements are";
	for(index=size-1;index>=0;index--)//index<=size-1
    {
		cout<<"\na["<<index<<"]: "<<a[index];
	}
		
	return 0;
}
