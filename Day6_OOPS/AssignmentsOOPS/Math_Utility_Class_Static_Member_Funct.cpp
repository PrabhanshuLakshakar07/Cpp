#include<iostream>
using namespace std;

class MathUtil
{
public:
    static int square(int n)
    {
        return n*n;
    }

    static int cube(int n)
    {
        return n*n*n;
    }
};

int main()
{
    cout<<"Square of 3 = "<<MathUtil::square(3)<<endl;
    cout<<"Cube of 3 = "<<MathUtil::cube(3)<<endl;

    cout<<"Square of 5 = "<<MathUtil::square(5)<<endl;
    cout<<"Cube of 5 = "<<MathUtil::cube(5)<<endl;
}