#include <iostream>
#include <vector>
#include <set>
//find number of duplicates in vector
//or
//find count of each elments in vector

using namespace std;



int main()
{
   vector<int> numbers = {11,22,33,11,44,55,22,11,77,99,11,22,11,99};
   set<int> unique_numbers;
   //Add each element to set; only unique get stored. Job done. 
   //find count of each element in vector.

   cout<<"\nElements are:";
	for(int i: numbers)
	{
		cout<<i<<" ";
	}
   for (int i: numbers)
   {
   	unique_numbers.insert(i);


   }
	cout<<"\nUnique elements are:";
	for(int i: unique_numbers)
	{
		cout<<i<<" ";
	}

    for(int i: unique_numbers)
    {
    	int count=0;
    	for(int j: numbers)
    	{
    		if(i==j)
    			count++;
    	}
    	cout<<"\nCount of "<<i<<" is "<<count<<endl;
    }

   cout<<"total duplicate  elements are:"<<(numbers.size()-unique_numbers.size());
   
   return 0;
}

