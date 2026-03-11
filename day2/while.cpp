#include<iostream>
using namespace std;
int main()
{
	int number,digit;
   	cout<<"\nEnter a number:";
   	cin>>number;
   	
   	while(number>0)//till not zero
	{
		digit=number%10;//Extracts last digit /or/ return last digit
		number=number/10;//Removes last digit /or / deletes last digit
		cout<<"\n number:"<<number<<" digit:"<<digit;
	}
	return 0;
}
