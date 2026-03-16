//Students must fill the missing logic inside the functions.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to take input
vector<int> readNumbers()
{
   vector<int> numbers;
   string input;



   cout<<"Enter numbers (Press ENTER on blank line to stop):\n";


   while(true)
   {
       getline(cin,input);

       if(input=="")
           break;

       // TODO: convert input to integer and add to vector
       numbers.push_back(stoi(input));


   }

   return numbers;
}



// Function to print elements
void printElements(const vector<int>& numbers)
{
   cout<<"\nElements are: ";

   // TODO: print all elements using range-based loop
    for(int i : numbers)
    {
         cout<<i<<" ";
    }

}


// Function to calculate sum
int findSum(const vector<int>& numbers)
{
   int sum = 0;

   // TODO: calculate sum of vector elements
    for(int i : numbers)
    {
         sum+=i;
    }

   return sum;
}


// Function to print numbers less than average
void printLessThanAverage(const vector<int>& numbers,double avg)
{
   cout<<"\nElements less than average: ";

   // TODO: print elements less than avg

    for(int i : numbers)
    {
         if(i<avg)
         cout<<i<<" ";
    }


}


// Function to print numbers greater than average
void printGreaterThanAverage(const vector<int>& numbers,double avg)
{
   cout<<"\nElements greater than average: ";

   // TODO: print elements greater than avg

    for(int i : numbers)
    {
         if(i>avg)
         cout<<i<<" ";
    }


}



int main()
{
   vector<int> numbers = readNumbers();

   cout<<"\nTotal elements: "<<numbers.size();

   printElements(numbers);

   int sum = findSum(numbers);
   cout<<"\nSum = "<<sum;

   double avg = (double)sum / numbers.size();
   cout<<"\nAverage = "<<avg;

   printLessThanAverage(numbers,avg);
   printGreaterThanAverage(numbers,avg);

   return 0;
}
