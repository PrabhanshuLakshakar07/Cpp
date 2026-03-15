#include <iostream>
using namespace std;

class Complex
{
	private:
	float real,img;
	public:
		void set_complex(float real,float img)
		{
			this->real=real;
			this->img=img;
			cout<<"\nComplex set";
		}	
		void display_complex()
		{
			cout<<"\n"<<real<<" + "<<img<<"i";
		}
		friend Complex operator+(Complex n1,Complex n2);
};
Complex operator+(Complex n1,Complex n2)
{
  Complex t;
   t.real=n1.real+n2.real;
   t.img=n1.img+n2.img;
   return t;
}

int main()
{
	Complex n1,n2,n3;
	n1.set_complex(3,5);
	n2.set_complex(2,8);
	n3=n1+n2;
	n1.display_complex();
	n2.display_complex();
	n3.display_complex();
    return 0;
}

