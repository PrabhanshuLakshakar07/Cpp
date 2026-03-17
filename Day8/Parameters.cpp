#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int power(int x,int n=1)
{
    int ans = 1;
    for(int i=0;i<n;i++)
    {
        ans *= x;
    }
    return ans;


}
int main()
{
//case1 power called without n - uses default value of n=1





cout<<power(2)<<endl;//5^1 = 5
cout<<power(2,3)<<endl;//5^3 = 125


}










//Default value parameter in C++ is a parameter which is given with a default value in function definition. If not supplied, this value would be taken.
/* void intro(string name,string native="india")
{
cout<<"\n hi i am "<<name<<" from "<<native;
}
intro("amar","mumbai");// hi i am amar from mumbai
intro("amar");// hi i am amar from india
//rule:All default value parameters should be right-side only


//Using default value parameter construct power function which will take power by default as 1 if not given otherwise N given by the user and return X raised to N answer.
*/