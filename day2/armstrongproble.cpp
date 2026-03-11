#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number,digit,sum=0;
   	cout<<"\nEnter a number:";
   	cin>>number;
   	int tno=number;//copied
   	
   	while(tno>0)//till not zero
	{
		digit=tno%10;//Extracts last digit /or/ return last digit
		tno=tno/10;//Removes last digit /or / deletes last digit
		sum=sum+pow(digit,3);
	}
	if(number==sum)
		cout<<"\n"<<number<<" is armstrong";
	else
		cout<<"\n"<<number<<" is not armstrong";
	return 0;
}

