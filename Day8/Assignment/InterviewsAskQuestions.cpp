/*
Q1 — Function & Default Arguments (Asked at: TCS, Infosys, Wipro)
Write a function calculateArea() that works for both
circle and rectangle using default arguments.
- calculateArea()          → rectangle with default 1x1
- calculateArea(5)         → square of side 5
- calculateArea(4, 6)      → rectangle 4x6
- calculateArea(3.14, 7.0) → circle with radius 7

Q2 — Inline Function (Asked at: Infosys, Capgemini)
Write an inline function isPrime(int n) that returns
true/false. Call it inside main() for numbers 1 to 20
and print which are prime.

Why would you use inline here instead of a regular function?
Be prepared to explain the tradeoff.

Q3 — Function Overloading (Asked at: TCS, Accenture, Amazon)
Overload a function print() to handle:
  - print(int)
  - print(double)
  - print(string)
  - print(int, int)      → prints sum

Show which version gets called for each of these:
  print(5);
  print(3.14);
  print("Hello");
  print(3, 4);

Q4 — Lambda Function (Asked at: Microsoft, Flipkart, Adobe)
Given this vector:
  vector<int> nums = {4, 1, 7, 2, 9, 3, 6};

Use a lambda to:
  a) Sort in descending order
  b) Print only even numbers
  c) Find the first number greater than 5

Use only STL algorithms (sort, for_each, find_if).

Q5 — Lambda with Capture (Asked at: Google, Microsoft, Uber)
Write a lambda that captures a variable 'threshold'
from outer scope and filters a vector, returning only
elements greater than threshold.

int threshold = 10;
vector<int> data = {3, 15, 8, 22, 6, 18};

Expected output: 15 22 18
Solve using both [=] and [&] capture. Explain the difference.

Q6 — Pointer to Function (Asked at: TCS, HCL, Infosys)
Write three functions:
  int add(int, int)
  int subtract(int, int)
  int multiply(int, int)

Create a function pointer that can point to any of them.
Then create an array of function pointers and call each
in a loop with values (10, 5).

Q7 — Pointer & Dynamic Memory (Asked at: Amazon, Zoho, Wipro)
Write a function that:
  - Takes size n from user
  - Dynamically allocates an int array of size n
  - Fills it with squares: arr[i] = i * i
  - Prints the array
  - Frees memory properly

What happens if you forget delete[]? What tool detects it?

Q8 — Operator Overloading (+, ==, <<) (Asked at: Microsoft, Infosys, Adobe)
Create a class Complex for complex numbers.
Overload:
  +   → add two complex numbers
  ==  → compare two complex numbers
  <<  → print as "3 + 4i"

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    cout << c3;                    // 4 + 6i
    cout << (c1 == c2);            // 0
}

Q9 — Operator Overloading (++ pre & post) (Asked at: TCS, Capgemini, Accenture)
Create a class Counter with a private int value.
Overload both:
  ++c   (pre-increment)  → increments then returns
  c++   (post-increment) → returns then increments

Show the difference in output between:
  Counter c(5);
  cout << ++c;   // expected: 6
  cout << c++;   // expected: 6 (prints old, then becomes 7)
  cout << c;     // expected: 7

Q10 — Friend Function (Asked at: Infosys, Wipro, HCL)
Create two classes Box and Warehouse.
Box has private: length, width, height.

Write a friend function:
  int totalVolume(Box b1, Box b2)
that adds volumes of both boxes and returns result,
WITHOUT using any getter functions.

Q11 — Friend Class (Asked at: TCS, Zoho)
Create class BankAccount with private balance.
Create class Auditor as a friend class with a method:
  void inspect(BankAccount& acc)
  → prints "Auditing account. Balance: XXXX"

Prove that a non-friend class cannot access balance
by adding a third class that tries and fails to compile.

Q12 — Override & Virtual (Asked at: Amazon, Google, Flipkart)
Create this hierarchy:
  Shape (base)    → virtual double area()
  Circle          → override area()
  Rectangle       → override area()
  Triangle        → override area()

Store all three in a vector<Shape*> and call area()
on each using a loop.

What is the output WITHOUT virtual? Why?
What keyword ensures the override is intentional?

Q13 — Override vs Overload distinction (Asked at: Microsoft, Accenture, Cognizant)
Given this code, identify what is overloading
and what is overriding — then fix the bug:

class Printer {
public:
    void print(int x)    { cout << "int: " << x; }
    void print(string s) { cout << "str: " << s; }
    virtual void show()  { cout << "Printer"; }
};

class LaserPrinter : public Printer {
public:
    void show() { cout << "LaserPrinter"; }  // bug here
};

Printer* p = new LaserPrinter();
p->show();   // what prints? what should print?

Q14 — Combining: Lambda + Overload + Pointer (Asked at: Google, Uber, Adobe)
Write an apply() function that:
  - Takes an int array, its size, and a function pointer
  - Applies the function to each element and prints result

Then call it three ways:
  a) With a named function double_it(int x)
  b) With a named function square_it(int x)
  c) With a lambda directly passed as argument

int arr[] = {1, 2, 3, 4, 5};

Q15 — Full OOP: Overload + Override + Friend + Lambda (Asked at: Amazon, Microsoft, Google)
Design a Student class:
  Private: name (string), marks (float)

  1. Overload >>  to input a student
  2. Overload <<  to print "Name: X  Marks: Y"
  3. Overload <   to compare two students by marks
  4. Friend function topStudent(Student a, Student b)
     → returns the one with higher marks
  5. In main(), create a vector<Student>, sort it
     using a lambda, print the sorted list

This question tests whether you can combine all
concepts cleanly in one design.

Company frequency summary:
Company
Questions typically asked
Google
Q5, Q12, Q14, Q15
Microsoft
Q4, Q8, Q13, Q14, Q15
Amazon
Q3, Q7, Q12, Q15
TCS
Q1, Q3, Q6, Q9, Q10, Q11
Infosys
Q2, Q3, Q8, Q10, Q13
Wipro
Q1, Q7, Q10, Q11
Accenture
Q3, Q9, Q13
Adobe
Q4, Q8, Q14
Flipkart
Q4, Q12
Zoho
Q7, Q11
Uber
Q5, Q14
HCL
Q6, Q10
Capgemini
Q2, Q9
Cognizant
Q13


*/

//Q1
//Answer

#include<iostream>
using namespace std;

double calculateArea(double l=1, double b=1)
{
    return l*b;        // rectangle / square
}

// circle version (overload)
double calculateArea(double pi, double r, int)
{
    return pi*r*r;
}

int main()
{
    cout<<calculateArea()<<endl;            // 1
    cout<<calculateArea(5)<<endl;           // 25
    cout<<calculateArea(4,6)<<endl;         // 24
    cout<<calculateArea(3.14,7,1)<<endl;    // circle
}

//Q2
//Answer
#include<iostream>
using namespace std;

inline bool isPrime(int n)
{
    if(n<=1) return false;

    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;

    return true;
}

int main()
{
    for(int i=1;i<=20;i++)
        if(isPrime(i))
            cout<<i<<" ";
}

//Q3
//Answer
#include<iostream>
using namespace std;

void print(int x)
{
    cout<<"int: "<<x<<endl;
}

void print(double x)
{
    cout<<"double: "<<x<<endl;
}

void print(string s)
{
    cout<<"string: "<<s<<endl;
}

void print(int a,int b)
{
    cout<<"sum: "<<a+b<<endl;
}

int main()
{
    print(5);
    print(3.14);
    print("Hello");
    print(3,4);
}

//Q4
//Answer
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {4,1,7,2,9,3,6};

    // a) sort descending
    sort(nums.begin(), nums.end(),
         [](int a,int b){ return a>b; });

    cout<<"Sorted Desc: ";
    for(int x:nums) cout<<x<<" ";
    cout<<endl;

    // b) print even
    cout<<"Even: ";
    for_each(nums.begin(), nums.end(),
             [](int x){
                 if(x%2==0) cout<<x<<" ";
             });
    cout<<endl;

    // c) first >5
    auto it = find_if(nums.begin(), nums.end(),
                      [](int x){ return x>5; });

    if(it!=nums.end())
        cout<<"First >5: "<<*it;
}

    //Q5
    //Answer
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int threshold = 10;

    vector<int> data = {3,15,8,22,6,18};

    cout<<"Using [=]: ";
    for_each(data.begin(), data.end(),
             [=](int x){
                 if(x>threshold) cout<<x<<" ";
             });

    cout<<"\nUsing [&]: ";
    for_each(data.begin(), data.end(),
             [&](int x){
                 if(x>threshold) cout<<x<<" ";
             });
}

//Q6
//Answer
#include<iostream>
using namespace std;

int add(int a,int b){ return a+b; }
int subtract(int a,int b){ return a-b; }
int multiply(int a,int b){ return a*b; }

int main()
{
    int (*fp)(int,int);

    fp = add;
    cout<<fp(10,5)<<endl;

    int (*arr[3])(int,int) = {add, subtract, multiply};

    for(int i=0;i<3;i++)
        cout<<arr[i](10,5)<<endl;
}

//Q7
//Answer
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)
        arr[i] = i*i;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    delete[] arr;   // VERY IMPORTANT
}

//Q8
//Answer
#include<iostream>
using namespace std;

class Complex
{
    int r,i;
public:
    Complex(int a=0,int b=0){ r=a; i=b; }

    Complex operator+(Complex c)
    {
        return Complex(r+c.r, i+c.i);
    }

    bool operator==(Complex c)
    {
        return r==c.r && i==c.i;
    }

    friend ostream& operator<<(ostream &out, Complex c)
    {
        out<<c.r<<" + "<<c.i<<"i";
        return out;
    }
};

int main()
{
    Complex c1(3,4), c2(1,2);
    Complex c3 = c1 + c2;

    cout<<c3<<endl;
    cout<<(c1==c2);
}

//Q9
//Answer

#include<iostream>
using namespace std;

class Counter
{
    int val;
public:
    Counter(int v){ val=v; }

    Counter operator++()      // pre
    {
        val++;
        return *this;
    }

    Counter operator++(int)   // post
    {
        Counter temp=*this;
        val++;
        return temp;
    }

    friend ostream& operator<<(ostream &out, Counter c)
    {
        out<<c.val;
        return out;
    }
};

int main()
{
    Counter c(5);

    cout<<++c<<endl;
    cout<<c++<<endl;
    cout<<c<<endl;
}

//Q10
//Answer
#include<iostream>
using namespace std;

class Box
{
    int l,w,h;
public:
    Box(int a,int b,int c){ l=a; w=b; h=c; }

    friend int totalVolume(Box,Box);
};

int totalVolume(Box b1, Box b2)
{
    return b1.l*b1.w*b1.h + b2.l*b2.w*b2.h;
}

int main()
{
    Box b1(2,3,4), b2(1,2,3);

    cout<<totalVolume(b1,b2);
}

//Q11
//Answer
#include<iostream>
using namespace std;

class BankAccount;

class Auditor
{
public:
    void inspect(BankAccount&);
};

class BankAccount
{
    int balance;

public:
    BankAccount(int b){ balance=b; }

    friend class Auditor;
};

void Auditor::inspect(BankAccount &acc)
{
    cout<<"Auditing account. Balance: "<<acc.balance;
}

int main()
{
    BankAccount a(5000);
    Auditor au;

    au.inspect(a);
}

//Q12
//Answer
#include<iostream>
#include<vector>
using namespace std;

class Shape
{
public:
    virtual double area(){ return 0; }
};

class Circle: public Shape
{
    double r;
public:
    Circle(double x){ r=x; }

    double area(){ return 3.14*r*r; }
};

class Rectangle: public Shape
{
    double l,w;
public:
    Rectangle(double a,double b){ l=a; w=b; }

    double area(){ return l*w; }
};

int main()
{
    vector<Shape*> v;

    v.push_back(new Circle(2));
    v.push_back(new Rectangle(3,4));

    for(auto s:v)
        cout<<s->area()<<endl;
}

//Q13
//Answer
#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
    //Function Overloading
    void print(int x)
    {
        cout << "int: " << x << endl;
    }

    void print(string s)
    {
        cout << "str: " << s << endl;
    }

    //Virtual Function (for overriding)
    virtual void show()
    {
        cout << "Printer" << endl;
    }
};

class LaserPrinter : public Printer
{
public:
    // Correct Override
    void show() override
    {
        cout << "LaserPrinter" << endl;
    }
};

int main()
{
    Printer* p = new LaserPrinter();

    p->show();     // Runtime polymorphism

    delete p;
    return 0;
}

//Q14
//Answer
#include<iostream>
using namespace std;

void apply(int arr[], int n, int (*f)(int))
{
    for(int i=0;i<n;i++)
        cout<<f(arr[i])<<" ";
}

int double_it(int x){ return x*2; }
int square_it(int x){ return x*x; }

int main()
{
    int arr[]={1,2,3,4,5};

    apply(arr,5,double_it);
    cout<<endl;

    apply(arr,5,square_it);
    cout<<endl;

    apply(arr,5, [](int x){ return x+10; });
}
//Q15
//Answer
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student
{
    string name;
    float marks;

public:
    friend istream& operator>>(istream &in, Student &s)
    {
        in>>s.name>>s.marks;
        return in;
    }

    friend ostream& operator<<(ostream &out, Student s)
    {
        out<<"Name: "<<s.name<<" Marks: "<<s.marks<<endl;
        return out;
    }

    bool operator<(Student s)
    {
        return marks < s.marks;
    }

    friend Student topStudent(Student a, Student b)
    {
        return (a.marks>b.marks)?a:b;
    }

    float getMarks(){ return marks; }
};

int main()
{
    vector<Student> v(3);

    for(auto &s:v) cin>>s;

    sort(v.begin(), v.end(),
         [](Student a,Student b)
         {
             return a.getMarks() > b.getMarks();
         });

    for(auto s:v) cout<<s;
}





