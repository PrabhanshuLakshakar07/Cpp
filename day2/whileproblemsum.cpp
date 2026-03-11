#include<iostream>
using namespace std;
int main()
{
	int number,digit,rno=0;
   	cout<<"\nEnter a number:";
   	cin>>number;
   	int tno=number;//copied
   	
   	while(tno>0)//till not zero
	{
		digit=tno%10;//Extracts last digit /or/ return last digit
		tno=tno/10;//Removes last digit /or / deletes last digit
		rno=rno*10+digit;
	}
	cout<<"\nReverse is :"<<rno;
	if(rno==number)
		cout<<"\n"<<number<<" is palindrome";
	else
		cout<<"\n"<<number<<" is not palindrome";
	return 0;
}
