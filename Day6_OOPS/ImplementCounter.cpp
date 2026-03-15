
#include <iostream>
using namespace std;
class Counter
{
private:
    int count;

public:

   	Counter(int value)
   	{
   		count=value;
   		cout<<"\nCounter set to:"<<count;
	}

    void display()//Display current value of counter. 
    {
        cout<<"\nCounter:"<<count;
    }

    friend void operator++(Counter &c);
};

void operator++(Counter &c)
{
	c.count+=1;//c++;	
}

int main()
{
    Counter my_count(100);
	++my_count;//operator++(obj)-->++(object)
	my_count.display();
++my_count;//operator++(obj)-->++(object)
	my_count.display();
	++my_count;//operator++(obj)-->++(object)
	my_count.display();
	++my_count;//operator++(obj)-->++(object)
	my_count.display();	
    return 0;
}


