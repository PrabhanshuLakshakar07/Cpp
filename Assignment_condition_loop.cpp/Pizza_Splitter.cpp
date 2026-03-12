#include<iostream>

using namespace std;

int main()
{

    int total_slices,friends ,sum;

    cout<<"enter the Slice and Friends :-";
    cin>>total_slices>>friends;
           sum=total_slices/friends;

    if(total_slices%friends==0){
        cout<<"Equal Share! Everyone gets "<<sum<<" slices";

    }
    else{
        cout<<"Fight For the Last pieace !";
    }
        
    return 0;




}