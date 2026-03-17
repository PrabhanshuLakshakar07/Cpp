#include <iostream>
using namespace std;
/*
Use lambda to accept two parameters and return their addition. 


lambda:A throwaway function which can be written anywhere without a proper function definition, 
//used once and then thrown away as not useful for the rest of it. 

[](data type data)->return type{operation};
[]:nothing captured
[=]:caputre by value:captures surronding values seen local only and ca be used
[&]:caputre by reference:Changes done to the data will be seen outside also                                         

*/


int main() 
{
	auto greet=[](){cout<<"\nHello";};//Basic Lambda, not accepting anything, not returning anything, just printing. 
	greet();
	auto greet2=[](string name){cout<<"\nHello,"<<name;};//Lambda accepting a parameter and printing it back 
	greet2("amar");
    return 0;
}











