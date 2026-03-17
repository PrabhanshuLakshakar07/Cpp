#include <iostream>
using namespace std;
/*
lambda:A throwaway function which can be written anywhere without a proper function definition, 
//used once and then thrown away as not useful for the rest of it. 

[](data type data)->return type{operation};
[]:nothing captured
[=]:caputre by value:Change is done only seen in surrounding    . 
[&]:caputre by reference:Changes done to the past data will be seen.                                         

*/


int main() 
{
	auto greet=[](int a, int b){cout<<"addition of "<<a<<" and "<<b<<" is "<<a+b;};//Basic Lambda, not accepting anything, not returning anything, just printing. 
	greet(5, 3);
	
    return 0;
}











