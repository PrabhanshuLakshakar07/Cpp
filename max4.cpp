#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float no1,no2,no3,no4;
	cout<<"Enter 4 numbers\n";
	cin>>no1>>no2>>no3>>no4;
	cout<<"\nMaximum is:"<<max(max(no1,no2),max(no3,no4));
	        //                50   15  50   15
	return 0;
}
