#include<iostream>
#include<string>
using namespace std;

//
/// @return 
int main()
{
    map<int,string> digitWords;

digitWords[0] = "zero";
digitWords[1] = "one";
digitWords[2] = "two";
digitWords[3] = "three";
digitWords[4] = "four";
digitWords[5] = "five";
digitWords[6] = "six";
digitWords[7] = "seven";
digitWords[8] = "eight";
digitWords[9] = "nine";

	string number;
	cout<<"Enter a  number: ";
    cin>> number;

    cout<<"number in works: ";

	for(char c : number)
	{
        int digit =c-'0'; //a conversion from char to int. '0' is 48 in ascii and '1' is 49 and so on. So if we subtract '0' from any digit character we get the integer value of that digit.   
        cout<<digits[digit]<<" ";

	}

	
	return 0;
}