#include<iostream>
using namespace std;

int main()
{
    int celsius;
    cout<<"Enter the Tempreture :=";
    cin>>celsius;

    if (celsius<20)
    {
        cout<<"Its Cold Take ! Take One Tea .";
    }else if (20<=celsius && 30>=celsius)
    {
        cout<<"Its Warm Warm ! Get Iced Coffee !";
    }
    else{
   cout<<"It's too Hot ! Take a cold shower !";
    }
    return 0;
    
}