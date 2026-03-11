#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;

	/*while(i<=3)
	{
		cout<<"\ni="<<i;
		++i;
	}*/
	while(n>=0)
	{
		cout<<n<<", ";
		--n;
        cout<<"\n this is"<<n;
	}
	cout<<"\noutside loop i is:"<<n;
	return 0;
}
