#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class Time
{
private:
    int h,m,s;

public:

    void set_time(int h,int m,int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
    }

    void display_time()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

    friend Time operator+(Time t1, Time t2);
};

Time operator+(Time t1, Time t2)
{
    Time t3;

    int sec1 = t1.h*3600 + t1.m*60 + t1.s;
    int sec2 = t2.h*3600 + t2.m*60 + t2.s;

    int total = sec1 + sec2;

    t3.h = total / 3600;
    total = total % 3600;

    t3.m = total / 60;
    t3.s = total % 60;

    return t3;
}

int main()
{
    Time t1,t2,t3;

    t1.set_time(3,40,50);
    t2.set_time(2,45,52);

    t3 = t1 + t2;

    cout<<"Time 1 : ";
    t1.display_time();

    cout<<"Time 2 : ";
    t2.display_time();

    cout<<"Total Time : ";
    t3.display_time();

    return 0;
}




//////////////////////////////////2nd Approsch/////////////////////
/*

class TimeCalculator
{
	private:
	int hour,min,sec;
	public:
		void set_hour(float hour,float min,float sec)
		{
			this->hour=hour;
			this->min=min;
			this->sec=sec;
			cout<<"\nTime set";
		}	
		void display_Time()
		{
			cout<<"\n"<<hour<<" : "<<min<<" : "<<sec;
		}
		
        friend TimeCalculator operator+(TimeCalculator t1,TimeCalculator t2)
        {
            TimeCalculator t;
            t.hour=t1.hour+t2.hour;
            t.min=t1.min+t2.min;
            t.sec=t1.sec+t2.sec;
            if(t.sec>=60)
            {
                t.min+=t.sec/60;
                t.sec=t.sec%60;
            }
            if(t.min>=60)
            {
                t.hour+=t.min/60;
                t.min=t.min%60;
                t.sec=t.sec%60;
            }
            return t;
        }
};



int main()
{
	TimeCalculator n1,n2,n3;
	n1.set_hour(3,40,50);
	n2.set_hour(2,45,52);
	n3=n1+n2;
	n1.display_Time();
	n2.display_Time();
	n3.display_Time();
    return 0;
}




*/
