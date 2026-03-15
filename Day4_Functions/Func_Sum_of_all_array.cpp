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
    int sum(int a[],int size)
    {
        int s=0;
        for(int i=0;i<size;i++)
        {
            s=s+a[i];
        }
        return s;
    }
void doubler_array(int a[],int size)
	{
		for(int i=0;i<size;i++)
		  {
              a[i]=a[i]+a[i];
        }
	}
int main()
{

    cout<<"\nSum of all array is "<<sum(a,size);
    
    return 0;
}
