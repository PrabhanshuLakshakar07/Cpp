#include<iostream>
#include<cmath>

using namespace std;

bool quadric(int a , int b, int c)
{
   int sum=pow(b,2)-4*a*c;
   if(sum<0)
   {
    return false;
   }
   else
   {

    return true;
   }

  
}

int main()
{
    int a,b,c;

    cout << "Enter a number: ";
    cin >>a>>b>>c;
    if(quadric(a,b,c))
    {
        cout<<"Real Roots";
    }
    else
    {
        cout<<"Imaginary Roots";
    }

    return 0;
}