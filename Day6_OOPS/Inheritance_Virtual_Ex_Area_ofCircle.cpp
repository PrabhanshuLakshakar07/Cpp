#include <iostream>
using namespace std;
//A pure virtual function is a function without a body
// which enforces overriding as a compulsion to whoever inherites  
class Shape
{
public:
 virtual void area()=0;

	
};
class Circle:public Shape
{
    private: float r;
	public :
		void set_r(float r)
		{
            this->r=r;
            cout<<"\nRadius set:"<<r;
        }
        void area()
        {
            
			cout<<"\nArea Of Circle Is:" <<(3.14*r*r);
		}

};

int main()
{
    Circle c;
    c.set_r(5);
    c.area();
    
	
    return 0;
}
