#include<iostream>
using namespace std;
int main()
{
	int start,end,i;
	cout<<"Enter Start and End\n";
	cin>>start>>end;
	if(start<end)
		{
			for(i=start;i<=end;i++)
				cout<<i<<",";
		}
	else
		{
			for(i=start;i>=end;i--)
				cout<<i<<",";
		}

	return 0;
}

