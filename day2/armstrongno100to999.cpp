#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number,sum,digit;
	for(number=100;number<=999;number++)//We'll supply the number. 
	{
	  int tno=number;//copied
	  sum=0;//reset
   	  while(tno>0)//till not zero
	   {
		digit=tno%10;//Extracts last digit /or/ return last digit
		tno=tno/10;//Removes last digit /or / deletes last digit
		sum=sum+pow(digit,3);
	   }
	  if(number==sum)
		 cout<<"\n"<<number<<" is armstrong";
	}
	

	return 0;
}
