#include <iostream>
using namespace std;
void print_array(int a[],int size)
	{
		cout<<"\nArray has\n";
		for(int i=0;i<size;i++)
		  {
              cout<<a[i]<<",";
        }
	}
void doubler_array(int a[],int size)
	{
		for(int i=0;i<size;i++)
		  {
              a[i]=a[i]*2;
        }
	}
int main()
{
    int a[]={10,20,30,40,50},size=5;
    print_array(a,size);
    doubler_array(a,size);
    print_array(a,size);
    return 0;
}
